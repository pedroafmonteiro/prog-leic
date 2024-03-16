#include <iostream>
using namespace std;

bool pangram(const char s[], char m[]) {
    int count[26] = { 0 };
    int i = 0;
    while (s[i] != '\0') {
        if (int(s[i]) >= 65 && int(s[i]) <= 90) {
            count[int(s[i]) - 65] = 1;
        } else if (int(s[i]) >= 97 && int(s[i]) <= 122) {
            count[int(s[i]) - 97] = 1;
        } else {
            i++;
            continue;
        }
        i++;
    }
    int z = 0;
    int mindex = 0;
    for (int k = 0; k < 26; k++) {
        if (count[k] == 1) {
            z++;
        } else {
            m[mindex] = char(k + 97);
            mindex++;
        }
    }
    m[mindex] = '\0';
    if (z == 26) {
        return true;
    } else {
        return false;
    }
}

int main() {
    { char s[] = "The quick brown fox jumps over the lazy dog";
  char m[27] = { -1 };
  bool r = pangram(s, m);
  cout << '\"' << s << "\" "
       << boolalpha << r << " \"" << m << "\"\n"; }
    return 0;
}