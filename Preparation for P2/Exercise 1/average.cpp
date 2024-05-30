#include "show_file.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

void average(const string& input_fname, const string& output_fname) {
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    int count_lines = 0;
    while(getline(in, line)) {
        double sum = 0;
        int count = 0;
        istringstream iss(line);
        double x;
        while(iss >> x) {
            sum += x;
            count++;
        }
        double average = sum / (double)count;
        count_lines++;
        out << fixed << setprecision(3) << average << '\n';
    }
    out << "lines=" << count_lines << endl;
}

int main() {
    return 0;
}