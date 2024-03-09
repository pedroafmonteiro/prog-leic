#include <iostream>
using namespace std;

unsigned long hstr_to_integer(const char hstr[]) {
    int i = 0;
    unsigned long sum = 0;
    while (hstr[i] != '\0') {
        if (hstr[i] >= '0' && hstr[i] <= '9') {
            unsigned long val = int(hstr) - 48;
            sum = sum*16 + val;
        } else if (hstr[i] >= 'a' && hstr[i] <= 'z') {
            unsigned long val = 
        }
        i++;
    }
    return sum;
}

int main() {
    cout << hstr_to_integer("0");
    return 0;
}