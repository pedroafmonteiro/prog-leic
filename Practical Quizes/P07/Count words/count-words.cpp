#include <iostream>
#include <fstream>
using namespace std;

string uppercase(const string s) {
    string r = s;
    for (char& c : r) {
        c = toupper(c);
    }
    return r;
}

int count(const string& fname, const string& word) {
    ifstream in(fname);
    int count = 0;
    string word_uc = uppercase(word);
    string x;
    while (in >> x) {
        if (uppercase(x) == word_uc) {
            count++;
        }
    }
    return count;
}

int main() {
    return 0;
}