#include <string>
#include <list>
#include <map>
#include <climits>
#include <iostream>

using namespace std;

string cat_keys(list<map<string, unsigned>> lst) {
    if (lst.empty()) {
        return "";
    }
    unsigned current_minimum = UINT_MAX;
    map<int, string> dict;
    int count1 = 0;
    int count2 = 0;
    for (auto itr = lst.begin(); itr != lst.end(); itr++) {
        string current_concatenation = "";
        unsigned minimum = UINT_MAX;
        for (auto e : (*itr)) {
            if (e.second < minimum) {
                minimum = e.second;
            }
            current_concatenation += e.first;
        }
        if (minimum < current_minimum) {
            current_minimum = minimum;
            count2++;
        }
        count1++;
        dict.insert({count1, current_concatenation});
    }
    return dict.find(count2)->second;
}

int main() {
    return 0;
}