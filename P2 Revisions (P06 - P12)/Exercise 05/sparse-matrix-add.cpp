#include <map>
#include "smatrix.h"

using namespace std;

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    if (int(a.size()) == 0) {
        r = b;
    } else if (int(b.size()) == 0) {
        r = a;
    } else {
        map<pair<size_t, size_t>, int> common;
        for (size_t i = 0; i < a.size(); i++) {
            common[make_pair(a[i].row, a[i].col)] += a[i].value;
        }
        for (size_t i = 0; i < b.size(); i++) {
            common[make_pair(b[i].row, b[i].col)] += b[i].value;
        }
        r.clear();
        for (auto entry : common) {
            if (entry.second != 0) {
                r.push_back({entry.first.first, entry.first.second, entry.second});
            }
        }
    }
}

int main() {
    return 0;
}