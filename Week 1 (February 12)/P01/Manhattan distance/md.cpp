#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    for (int i = 1; i < n; i++) {
        cin >> x2 >> y2;
        sum += abs(x2 - x1) + abs(y2 - y1);
        x1 = x2;
        y1 = y2;
    }
    cout << sum << endl;
    return 0;
}