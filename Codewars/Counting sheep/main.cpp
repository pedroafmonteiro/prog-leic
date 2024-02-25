#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) {
    int count = 0;
    for (int i = 0; i < (int) arr.size(); i++) {
        if (arr[i] == true) {
            count += 1;
        }
    }
    return count;
}
