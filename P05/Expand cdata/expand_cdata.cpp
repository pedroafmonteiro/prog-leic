#include <iostream>
#include "cdata.h"
using namespace std;

int* expand_cdata(const cdata a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < a[i].count; x++) {
            count++;
        }
    }
    int count1 = 0;
    int* expanded = new int[count];
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < a[i].count; x++) {
            expanded[count1] = a[i].value;
            count1++;
        }
    }
    return expanded;
}

int main() {
    return 0;
}