#include <map>
#include <string>
#include <iostream>

void count_words(const std::string& str, std::map<std::string, size_t>& count) {
    std::string temp_string;
    size_t current = 0;
    for (size_t i = current; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (count.find(temp_string) != count.end()) {
                count.at(temp_string) ++;
                current = i;
                temp_string = "";
            } else {
                count.insert({temp_string, 1});
                current = i;
                temp_string = "";
            }
        } else {
            temp_string += tolower(str[i]);
        }
    }
    if (!temp_string.empty()) {
        if (count.find(temp_string) != count.end()) {
            count.at(temp_string)++;
        } else {
            count.insert({temp_string, 1});
        }
    }
    count.erase("");
}

void show_map(const std::map<std::string, size_t>& count) {
  std::cout << "[ ";
  for (const auto& e : count) {
    std::cout << e.first << ":" << e.second << ' ';
  }
  std::cout << "]\n";
}

int main() {
    { std::string s = "If you want to buy  buy  if you don't want to buy  bye bye";
  std::map<std::string, size_t> count; 
  count_words(s, count);
  show_map(count); }
    return 0;
}