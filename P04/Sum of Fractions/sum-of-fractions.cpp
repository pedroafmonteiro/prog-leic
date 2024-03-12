#include <iostream>
#include "fraction.h"
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

fraction add(fraction a, fraction b) {
    int res, resnum, resden;
    if (a.den == b.den) {
        res = a.num + b.num;
        resnum = res / gcd(res, a.den), resden = a.den / gcd(res, a.den);
    } else {
        fraction mul1 = { a.num * b.den , a.den * b.den };
        fraction mul2 = { b.num * a.den , b.den * a.den };
        res = mul1.num + mul2.num;
        resnum = res / gcd(res, mul1.den), resden = mul1.den / gcd(res, mul1.den);
    }
    if (resden < 0) {
        return { -resnum , -resden };
    } else if (resden == 1) {
        return { resnum , resden };
    } else {
        return { resnum , resden };
    }
}

fraction sum(const fraction fa[], int n) {
    if (n == 1) {
        return fa[0];
    } else {
        fraction result = fa[0];
        for (int i = 1; i < n; i++) {
            result = add(result, fa[i]);
        }
        return result;
    }
}

int main() {
    return 0;
}