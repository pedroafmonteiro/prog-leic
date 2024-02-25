#include <iostream>
using namespace std;

unsigned long next_mersenne(unsigned long n) {
    unsigned long mersenne = 1;
    unsigned long exponent = 0;

    if (n == 0) {
        return 0;
    }
    
    while (mersenne < n) {
        mersenne = (mersenne << 1) + 1;
        exponent++;
    }
    
    return mersenne;
}

int main() {
    return 0;
}