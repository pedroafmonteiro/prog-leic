#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>
#include "show_file.h"
using namespace std;

void maximum(const string& input_fname, const string& output_fname) {
    ifstream input_file(input_fname);
    ofstream output_file(output_fname);

    vector<double> values;
    double max_value = -1000.0;
    double value;
    int count = 0;

    while (input_file >> value) {
        values.push_back(value);
        max_value = max(max_value, value);
        count++;
    }

    for (const auto& value : values) {
        output_file << fixed << setprecision(3) << value << endl;
    }

    output_file << "count=" << count << "/max=" << fixed << setprecision(3) << max_value << endl;

    input_file.close();
    output_file.close();
}

int main() {
    return 0;
}