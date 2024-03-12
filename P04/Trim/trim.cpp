#include <iostream>
using namespace std;

void trim(char s[]) {
    int start = 0;
    while (s[start] != '\0' && s[start] == ' ') {
        ++start;
    }

    int end = start;
    while (s[end] != '\0') {
        ++end;
    }
    --end;
    while (end > start && s[end] == ' ') {
        --end;
    }

    int i = 0;
    for (int j = start; j <= end; ++j, ++i) {
        s[i] = s[j];
    }

    s[i] = '\0';
}


int main() {
    return 0;
}