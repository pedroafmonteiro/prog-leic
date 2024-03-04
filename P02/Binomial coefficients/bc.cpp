#include <iostream>
using namespace std;

unsigned long factorial(unsigned long n) {
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

unsigned long bc(unsigned long n, unsigned long k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    cout << bc(5, 0) << '\n';
    return 0;
}