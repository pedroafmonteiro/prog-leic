#include <iostream>
#include <fstream>
#include "wc.h"
using namespace std;

wcresult wc(const string& filename) {
    wcresult r;
    r.lines = 0;
    r.words = 0;
    r.bytes = 0;

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            r.lines++;
            r.bytes += line.size() + 1; // +1 for newline character

            istringstream iss(line);
            string word;
            while (iss >> word) {
                r.words++;
            }
        }
        file.close();
    }

    return r;
}

int main() {
    return 0;
}