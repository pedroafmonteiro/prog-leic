#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

double average(const string fname) {
    ifstream in(fname);
    vector<double> values;
    double sum = 0.0;
    for (string line; getline(in, line); ) {
        istringstream iss(line);
        for (string x; iss >> x; ) {
            replace_if(x.begin(), x.end(), [](char c) {
                return !isdigit(c) && c != '.' && c != '-';
            }, ' ');
            istringstream d(x);
            for (double y; d >> y; ) {
                values.push_back(y);
            }
        }
    }
    for (size_t i = 0; i < values.size(); i++) {
        sum += values[i];
    }
    return sum / double(values.size());
}

int main() {
    return 0;
}