#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

unsigned roman_to_arab(const string& roman) {
    unsigned result = 0;
    map<char, unsigned> roman_to_int = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    for (size_t i = 0; i < roman.size(); i++) {
        if (i + 1 < roman.size() && roman_to_int.find(roman[i])->second < roman_to_int.find(roman[i + 1])->second) {
            result -= roman_to_int.find(roman[i])->second;
        } else {
            result += roman_to_int.find(roman[i])->second;
        }
    }
    return result;
}

int main() {
    return 0;
}