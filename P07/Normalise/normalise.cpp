#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "print.h"
using namespace std;

void normalise(const string& input_fname, const string& output_fname) {
    ifstream input_file(input_fname);
    ofstream output_file(output_fname);

    if (input_file.is_open() && output_file.is_open()) {
        string line;
        while (getline(input_file, line)) {
            if (line.find_first_not_of(' ') != string::npos) {
                line.erase(0, line.find_first_not_of(' '));
                line.erase(line.find_last_not_of(' ') + 1);
                for (char& c : line) {
                    c = toupper(c);
                }
                output_file << line << '\n';
            }
        }
        input_file.close();
        output_file.close();
    }
}

int main() {
    return 0;
}