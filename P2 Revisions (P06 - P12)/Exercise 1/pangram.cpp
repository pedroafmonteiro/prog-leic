#include <string>

using namespace std;

bool pangram(const string& s, string& m) {
    bool letters[26] = {false};
    for (char c : s) {
        if (c != ' ') {
            letters[int(tolower(c)) - 97] = true;
        } else {
            continue;
        }
    }
    int count = 0;
    for (size_t i = 0; i < 26; i++) {
        if (letters[i] == false) {
            m += char(i + 97);
        } else {
            count += 1;
        }
    }
    if (count == 26) {
        return true;
    } else {
        return false;
    }
}

int main() {
    return 0;
}