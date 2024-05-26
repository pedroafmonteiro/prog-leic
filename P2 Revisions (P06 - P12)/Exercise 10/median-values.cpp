#include <string>
#include <iomanip>
#include <vector>
#include "show_file.h"

using namespace std;

void calc_medians(const string& input_fname, const string& output_fname) {
    ifstream in(input_fname);
    ofstream out(output_fname);
    for (string line; getline(in, line); ) {
        if (line[0] == '#' || line.empty()) {
            continue;
        }
        istringstream iss(line);
        string id;
        iss >> id;
        vector<double> v;
        for (double y; iss >> y; ) {
            v.push_back(y);
        }
        sort(v.begin(), v.end());
        int n = v.size();
        double m;
        if (n % 2 != 0) {
            m = v[n / 2];
        } else {
            m = 0.5 * (v[n / 2 - 1] + v[n / 2]);
        }
        out << id << ' ' << fixed << setprecision(1) << m << '\n';
    }
}

int main() {
    return 0;
}