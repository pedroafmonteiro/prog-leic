#include <iostream>
using namespace std;

bool isprime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (isprime(i) == true) {
            cout << i << " ";
        }
    }
    return 0;
}