#include <map>
#include <string>

void replace(const std::map<char, char>& r, std::string& s) {
    for (size_t i = 0; i < s.size(); i++) {
        if (r.find(s[i]) != r.end()) {
            s[i] = r.at(s[i]);
        }
    }
}

int main() {
    return 0;
}