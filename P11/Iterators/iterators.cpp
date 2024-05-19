#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>

template <typename Itr>
std::string to_string(Itr start, Itr end) {
    std::ostringstream oss;
    oss << "[ ";
    for (Itr itr = start; itr != end; ++itr) {
        oss << *itr << " ";
    }
    oss << "]";
    return oss.str();
}

template <typename Itr, typename T>
int replace(Itr start, Itr end, const T& a, const T& b) {
    int count = 0;
    for (Itr itr = start; itr != end; ++itr) {
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