#include <string>

using namespace std; 

string sliceString(string str) {
    str.erase(str.begin() + 0);
    str.erase(str.begin() + (str.size() - 1));
    return str;
}