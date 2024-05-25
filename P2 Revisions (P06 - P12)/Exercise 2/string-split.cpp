#include <string>
#include <vector>
#include "print_string.h"

using namespace std;

void split(const string& s, vector<string>& v) {
    size_t start = 0;
    size_t end = s.find(' ');
    while (end != string::npos) {
        v.push_back(s.substr(start, end - start));
        start = end + 1;
        end = s.find(' ', start);
    }
    v.push_back(s.substr(start));
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] == "") {
            v.erase(v.begin() + i);
            --i;
        }
    }
}

int main() {
    return 0;
}