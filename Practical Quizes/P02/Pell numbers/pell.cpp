#include <iostream>
using namespace std;

unsigned long pell(unsigned long n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        unsigned long prev = 0;
        unsigned long curr = 1;
        unsigned long result;
        
        for (unsigned long i = 2; i <= n; i++) {
            result = 2 * curr + prev;
            prev = curr;
            curr = result;
        }
        
        return result;
    }
}