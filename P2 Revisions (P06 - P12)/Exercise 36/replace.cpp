#include <map>
#include <string>
#include <iostream>

using namespace std;

void replace(const map<char, char>& r, string& s) {
    for (size_t i = 0; i < s.size(); i++) {
        if (r.count(s[i]) > 0) {
            s[i] = r.at(s[i]);
        }
    }
}

int main() {
    return '0';
}