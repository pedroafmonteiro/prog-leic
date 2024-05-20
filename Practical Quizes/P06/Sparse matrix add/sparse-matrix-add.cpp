#include <iostream>
#include <vector>
#include "smatrix.h"
using namespace std;


void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    size_t i = 0, j = 0;
    r.clear();
    
    while (i < a.size() && j < b.size()) {
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col)) {
            r.push_back(a[i]);
            i++;
        } else if (a[i].row > b[j].row || (a[i].row == b[j].row && a[i].col > b[j].col)) {
            r.push_back(b[j]);
            j++;
        } else {
            sm_entry entry = {a[i].row, a[i].col, a[i].value + b[j].value};
            if (entry.value != 0)
                r.push_back(entry);
            i++;
            j++;
        }
    }
    
    while (i < a.size()) {
        r.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        r.push_back(b[j]);
        j++;
    }
}

int main() {
    return 0;
}