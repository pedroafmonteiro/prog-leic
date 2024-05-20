#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longest_prefix(const vector<string>& v) {
    if (v.empty()) {
        return "";
    }
    
    string prefix = v[0];
    for (long unsigned int i = 1; i < v.size(); i++) {
        while (v[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
        }
    }
    
    return prefix;
}

int main() {
    return 0;
}