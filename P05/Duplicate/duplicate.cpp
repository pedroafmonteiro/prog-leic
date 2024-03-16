#include <iostream>
using namespace std;

char* duplicate(const char s[]) {
    int len = 0;
    int i = 0;
    while (s[i] != '\0') {
        len++;
        i++;
    }
    char* result = new char[len + 1];
    for (int i = 0; i < len; i++) {
        result[i] = s[i];
    }
    result[len] = '\0';
    return result;
}

int main() {
    return 0;
}