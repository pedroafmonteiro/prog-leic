#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool ispernicious(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }
    return isprime(count);
}

void print_pernicious_primes(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (ispernicious(i) && isprime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;
    print_pernicious_primes(a, b);
    return 0;
}