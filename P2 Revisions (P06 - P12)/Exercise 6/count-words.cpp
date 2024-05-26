#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

std::string toLower(const std::string& str) {
    std::string result;
    std::transform(str.begin(), str.end(), std::back_inserter(result), ::tolower);
    return result;
}

int count(const string& fname, const string& word) {
    ifstream file(fname);
    int count = 0;
    string w;
    while (file >> w) {
        if (toLower(word) == toLower(w)) {
            count++;
        }
    }
    return count;
}

int main() {
    return 0;
}