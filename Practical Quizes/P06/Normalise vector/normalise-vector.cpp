#include <iostream>
#include <vector>
#include "print_vector.h"
using namespace std;

template <typename T>
void normalise(vector<T>& v, const T& min, const T& max) {
    int size = v.size();
    for (int i = 0; i < size; i++) {
        if (v[i] < min) {
            v[i] = min;
        } else if (v[i] > max) {
            v[i] = max;
        }
    }
}

int main() {
    return 0;
}