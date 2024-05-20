#include <iostream>
#include <string>
using namespace std;

bool pangram(const string& s, string& m) {
    bool letters[26] = {false};

    for (char c : s) {
        if (isalpha(c)) {
            int index = tolower(c) - 'a';
            letters[index] = true;
        }
    }

    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) {
            isPangram = false;
            m += static_cast<char>('a' + i);
        }
    }

    return isPangram;
}

int main() {
    return 0;
}