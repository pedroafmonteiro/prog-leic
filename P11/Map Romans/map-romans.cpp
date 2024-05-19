#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<pair<char, unsigned>> roman_to_int = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

unsigned roman_to_arab(const string& roman) {
    unsigned result = 0;
    for (int i = 0; i < int(roman.size()); i++) {
        unsigned current_value = 0;
        for (const auto& pair : roman_to_int) {
            if (pair.first == roman[i]) {
                current_value = pair.second;
                break;
            }
        }
        
        if (i + 1 < int(roman.size())) {
            unsigned next_value = 0;
            for (const auto& pair : roman_to_int) {
                if (pair.first == roman[i + 1]) {
                    next_value = pair.second;
                    break;
                }
            }
            
            if (next_value > current_value) {
                result -= current_value;
            } else {
                result += current_value;
            }
        } else {
            result += current_value;
        }
    }
    
    return result;
}

int main() {
    return 0;
}