#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longest_prefix(const vector<string>& v) {
    string prefix;
    string first = v[0];
    for (size_t i = 0; i < first.size(); i++) {
        int occurences = 0;
        for (size_t j = 0; j < v.size(); j++) {
            if (i < v[j].size() && v[j][i] == first[i]) {
                occurences++;
            }
        }
        if (occurences == int(v.size())) {
            prefix += first[i];
        }
    }
    return prefix;
}

int main() {
    return 0;
}