#include <string>
#include <fstream>
#include "wc.h"

using namespace std;

wcresult wc(const string& filename) {
    wcresult r = {0, 0, 0};
    ifstream file(filename);
    string line;
    int line_count = 0;
    int word_count = 0;
    while(getline(file, line)) {
        string word;
        istringstream iss(line);
        while (iss >> word) {
            word_count++;
        }
        r.bytes += line.size() + 1;
        line_count++;
    }
    r.words += word_count;
    r.lines += line_count;
    return r;
}

int main() {
    return 0;
}