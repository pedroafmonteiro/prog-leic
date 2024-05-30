#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

void toLower(string &str) {
    for (size_t i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]);
    }
}

void count_words(const string& str, vector<pair<string, size_t>>& count) {
    istringstream iss(str);
    string word;
    while(iss >> word) {
        toLower(word);
        bool found = false;
        for (size_t i = 0; i < count.size(); i++) {
            if (word == count[i].first) {
                count[i].second++;
                found = true;
                break;
            }
        }
        if (!found) {
            count.emplace_back(word, size_t(1));
        }
    }
    sort(count.begin(), count.end());
}

void show_vector(const vector<pair<string, size_t>>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

int main() {
    return 0;
}