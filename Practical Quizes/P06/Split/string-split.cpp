#include <iostream>
#include <string>
#include <vector>
#include "print_string.h"
using namespace std;

void split(const string& s, vector<string>& v) {
    size_t pos = 0;
    size_t prevPos = 0;
    while ((pos = s.find(' ', prevPos)) != string::npos) {
        if (pos > prevPos) {
            string word = s.substr(prevPos, pos - prevPos);
            v.push_back(word);
        }
        prevPos = pos + 1;
    }
    if (prevPos < s.length()) {
        string lastWord = s.substr(prevPos);
        v.push_back(lastWord);
    }
}

int main() {
    return 0;
}