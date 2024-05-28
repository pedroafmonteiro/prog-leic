#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "show_file.h"

using namespace std;

void maximum(const string& input_fname, const string& output_fname) {
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    int count = 0;
    double max = 0.0;
    while (getline(in, line)) {
        double x;
        istringstream iss(line);
        while (iss >> x) {
            out << fixed << setprecision(3) << x << '\n';
            count++;
            if (max == 0.0) {
                max = x;
            } else {
                if (x > max) {
                    max = x;
                }
            }
        }
    }
    out << "count=" << count << "/" << "max=" << max << "\n";
}

int main() {
    return 0;
}