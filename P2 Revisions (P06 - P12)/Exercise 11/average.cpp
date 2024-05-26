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
            x.erase(std::remove_if(x.begin(), x.end(), [](unsigned char c) { return !std::isdigit(c) && c != '.'; }), x.end());
            istringstream d(x);
            for (double y; d >> y; ) values.push_back(y);
        }
    }
    for (size_t i = 0; i < values.size(); i++) {
        sum += values[i];
    }
    return sum / double(values.size());
}

int main() {
    { double m = average("tests/p6_test4.txt"); 
  cout << fixed << setprecision(2) << m << '\n'; }
    return 0;
}