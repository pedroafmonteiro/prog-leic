#include <iostream>
#include <algorithm>
using namespace std;

int median(const int a[], int n) {
    int* tmp = new int[n];
    int copy = 0;
    for (int i = 0; i < n; i++) {
        tmp[copy] = a[i];
        copy++;
    }
    sort(tmp, tmp + n);
    int median;
    if (n % 2 != 0) {
        median = tmp[n / 2];
    } else {
        median = (tmp[n / 2 - 1] + tmp[n / 2]) / 2;
    }
    delete[] tmp;
    return median;
}

int main() {
    return 0;
}