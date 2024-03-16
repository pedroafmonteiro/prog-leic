#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if ((int(c) >= 65 && int(c) <= 90) || (int(c) >= 97 && int(c) <= 122)) {
        cout << "LETTER";
    } else if (int(c) >= 48 && int(c) <= 57) {
        cout << "DIGIT";
    } else {
        cout << "OTHER";
    }
    return 0;
}