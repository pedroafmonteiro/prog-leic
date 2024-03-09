#include <iostream>
using namespace std;

int max(const int a[], int n) {
    int r = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > r) {
            r = a[i];
        }
    }
    return r;
}

int main() {
    return 0;
}
