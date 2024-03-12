#include <iostream>
using namespace std;

int nrl(const char s[], char low[]) {
    int count[26] = { 0 };
    int i = 0;
    while (s[i] != '\0') {
        if (int(s[i]) >= 97) {
            count[int(s[i]) - 97] += 1;
        } else if (int(s[i]) == 32) {
            i++;
            continue;
        } else {
            count[int(s[i]) - 65] += 1;
        }
        i++;
    }
    int ncount = 0;
    for (int k = 0; k < 26; k++) {
        if (count[k] == 1) {
            ncount += 1;
        }
    }
    int index = 0;
    for (int u = 0; u < ncount; u++) {
        for (int in = index; in < 26; in++) {
            if (count[in] == 1) {
                low[u] = char(in + 97);
                index = in + 1;
                break;
            }
        }
    }
    low[ncount] = '\0';
    return ncount;
}

int main() {
    { const char s[] = "  F C U P  F E U P  Porto  ";
  char l[27] = { -1 };
  int r = nrl(s, l);
  cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n"; }
    return 0;
}