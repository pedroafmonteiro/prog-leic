#include <iostream>
#include "print_array.h"
using namespace std;

int filter_duplicates(const int a[], int n, int b[]) {
    int current;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            current = a[i];
            b[count] = current;
        } else {
            if (current != a[i]) {
                current = a[i];
                count++;
                b[count] = current;
            }
        }
    }
    count++;
    return count;
}

int main() {
    return 0;
}