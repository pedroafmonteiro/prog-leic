#ifndef __Power_h__
#define __Power_h__

#include "Operation.h"
#include <cmath>

class Power : public Operation {
    public:
        Power(int op1, int op2) : Operation(op1, op2) { };
        int operation() const {
            int result = 1;
            for (int i = 0; i < get_op2(); i++) {
                result *= get_op1();
            }
            return result;
        }
};

#endif