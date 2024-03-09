#include <iostream>
#include <cmath>
using namespace std;

unsigned long hstr_to_integer(const char hstr[]) {
    int i = 0;
    unsigned long sum = 0, val;
    while (hstr[i] != '\0') {
        char c = hstr[i];
        if (c >= '0' && c <= '9') {
            val = c - '0';
            sum = sum * 16 + val;
        } else if ((c >= 'A' && c <= 'F')) {
            val = c - 'A' + 10;
            sum = sum * 16 + val;
        } else if (c >= 'a' && c <= 'f') {
            val = c - 'a' + 10;
            sum = sum * 16 + val;
        }
        i++;
    }
    return sum;
}

int main() {
    return 0;
}