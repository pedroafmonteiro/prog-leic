#include <string>
#include <map>
#include <iostream>
#include <sstream>

using namespace std;

void toLower(string& str) {
    for (char& c : str) {
        c = tolower(c);
    }
}

void count_words(const string& str, map<string, size_t>& count) {
    istringstream iss(str);
    string word;
    while (iss >> word) {
        toLower(word);
        if (count.count(word) > 0) {
            count.at(word)++;
        } else {
            count.insert({word, 1});
        }
    }
}

void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

int main() {
    return 0;
}