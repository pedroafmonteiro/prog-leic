#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iostream>
#include "print.h"

using namespace std;

string toUpper(const string& str) {
    string result;
    transform(str.begin(), str.end(), back_inserter(result), ::toupper);
    return result;
}

void normalise(const string& input_fname, const string& output_fname) {
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    while (getline(in, line)) {
        if (line.empty() || line.find_first_not_of(' ') == string::npos) {
            continue;
        } else {
            line.erase(0, line.find_first_not_of(' '));
            line.erase(line.find_last_not_of(' ') + 1);
            out << toUpper(line) << "\n";
        }
    }
}

int main() {
    return 0;
}