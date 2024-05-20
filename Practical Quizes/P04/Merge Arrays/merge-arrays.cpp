#include <iostream>
#include "print_array.h"
using namespace std;

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]) {
    int pos_a = 0, pos_b = 0, pos_c = 0;
    while (pos_a < na && pos_b < nb) {
        if (a[pos_a] < b[pos_b]) {
            c[pos_c] = a[pos_a];
            pos_a++;
        } else {
            c[pos_c] = b[pos_b];
            pos_b++;
        }
        pos_c++;
    }
    while (pos_a < na) {
        c[pos_c] = a[pos_a];
        pos_a++;
        pos_c++;
    }
    while (pos_b < nb) {
        c[pos_c] = b[pos_b];
        pos_b++;
        pos_c++;
    }
}

int main() {
    return 0;
}