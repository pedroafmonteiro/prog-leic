#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int k;
    cin >> k;
    int d;
    cin >> d;
    double sum = 0;
    for (int i = 0; i <= k; i++) {
        if (i % 2 == 0) {
            sum += 1.0 / (2 * i + 1);
        } else {
            sum += -1.0 / (2 * i + 1);
        }
    }
    double finalr = 4 * sum;
    cout << fixed << setprecision(d) << finalr;
    return 0;
}