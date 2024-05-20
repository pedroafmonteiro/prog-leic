#include <iostream>
using namespace std;

int len(const char a[]) {
    int count = 0;
    int i = 0;
    while (a[i] != '\0') {
        count++;
        i++;
    }
    count++;
    return count;
}

const char* longest(const char* pa[]) {
    const char* longestString = pa[0];
    int maxLength = len(pa[0]);

    int k = 1;
    while (pa[k] != nullptr) {
        int currentLength = len(pa[k]);
        if (currentLength >= maxLength) {
            maxLength = currentLength;
            longestString = pa[k];
        }
        k++;
    }

    return longestString;
}

int main() {
    return 0;
}