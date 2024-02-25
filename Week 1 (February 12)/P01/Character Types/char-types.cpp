#include <iostream>
using namespace std;

int main() {
    int count_n = 0;
    int count_c = 0;
    int count_d = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            count_c++;
        } else if (c >= '0' && c <= '9') {
            count_n++;
        } else {
            count_d++;
        }
    }
    cout << count_c << " " << count_n << " " << count_d;
    return 0;
}