#include "smatrix.h"

using namespace std;

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    if (int(a.size()) == 0) {
        r = b;
    } else if (int(b.size()) == 0) {
        r = a;
    } else {
        for (size_t i = 0; i < a.size(); i++) {
            if (a[i].col == b[i].col && a[i].row == b[i].row) {
                int final_value = a[i].value + b[i].value;
                if (final_value != 0) {
                    r.push_back({a[i].col, a[i].row, final_value});
                } else {
                    continue;
                }
            }
        }
    }
}

int main() {
    return 0;
}