#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <sstream>

using namespace std;

template <typename Itr> 
string to_string(Itr start, Itr end) {
    ostringstream out;
    string result;
    for (auto itr = start; itr != end; itr++) {
        out << *itr << ' ';
    };
    result += "[ " + out.str() + ']';
    return result;
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b) {
    int count = 0;
    for (auto itr = start; itr != end; itr++) {
        if (*itr == a) {
            *itr = b;
            count++;
        }
    }
    return count;
}

int main() {
    return 0;
}