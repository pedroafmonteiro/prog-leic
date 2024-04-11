#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

double average(const string& fname) {
    ifstream file(fname);
    double sum = 0.0;
    double value;
    int count = 0;

    while (file >> value) {
        sum += value;
        count++;
    }

    if (file.eof()) {
        file.clear();
        file.ignore();
    }
    else {
        file.clear();
        string invalidInput;
        getline(file, invalidInput);
        stringstream ss(invalidInput);
        while (ss >> value) {
            sum += value;
            count++;
        }
    }

    return sum / count;
}

int main() {
    return 0;
}