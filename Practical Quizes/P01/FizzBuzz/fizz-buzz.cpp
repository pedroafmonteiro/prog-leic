#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    for (int i = 0; i <= number; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << "Fizz" << " ";
        } else if (i % 3 != 0 && i % 5 == 0) {
            cout << "Buzz" << " ";
        } else if (i % 3 == 0 && i % 5 == 0) {
            continue;
        } else {
            cout << i << " ";
        }
    }
    return 0;
}