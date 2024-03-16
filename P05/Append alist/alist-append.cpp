#include <iostream>
#include "alist.h"
using namespace std;

void append(alist* a, const alist* b) {
    if (a->size == 0) {
        a->elements = new int[b->size];
        for (int i = 0; i < b->size; i++) {
            a->elements[i] = b->elements[i];
        }
        a->size = b->size;
    } else if (b->size > 0) {
        int* newElements = new int[a->size + b->size];
        for (int i = 0; i < a->size; i++) {
            newElements[i] = a->elements[i];
        }
        for (int i = 0; i < b->size; i++) {
            newElements[a->size + i] = b->elements[i];
        }
        delete[] a->elements;
        a->elements = newElements;
        a->size += b->size;
    }
}

int main() {
    return 0;
}