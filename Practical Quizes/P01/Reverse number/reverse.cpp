#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int reverse = 0;
    while (number > 0) {
        int remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number = number / 10;
    }
    cout << reverse << "\n";
    return 0;
}