#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "show_file.h"
using namespace std;

void calc_medians(const string& input_fname, const string& output_fname) {
    ifstream input_file(input_fname);
    ofstream output_file(output_fname);

    string line;
    while (getline(input_file, line)) {
        if (line.empty() || line[0] == '#') {
            continue;
        }

        stringstream ss(line);
        string identifier;
        ss >> identifier;

        vector<double> values;
        double value;
        while (ss >> value) {
            values.push_back(value);
        }

        sort(values.begin(), values.end());

        double median;
        if (values.size() % 2 == 1) {
            median = values[values.size() / 2];
        } else {
            median = 0.5 * (values[values.size() / 2 - 1] + values[values.size() / 2]);
        }

        output_file << identifier << " " << fixed << setprecision(1) << median << endl;
    }
    input_file.close();
    output_file.close();
}

int main() {
    return 0;
}