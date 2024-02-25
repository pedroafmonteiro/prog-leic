#include <iostream>
#include <string>

std::string fakeBin(std::string str){
    int strsize = str.length();
    for (int i = 0; i < strsize; i++) {
        int temp;
        temp = std::stoi(std::string(1, str[i]));
        if (temp < 5) {
            str[i] = '0';
        } else {
            str[i] = '1';
        }
    }
    return str;
}

int main() {
    std::string result = fakeBin("45385593107843568");
    std::cout << result << std::endl;
    return 0;
}
