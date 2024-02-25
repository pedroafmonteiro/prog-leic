#include <vector>

std::vector<int> reverseSeq(int n) {
    std::vector<int> list = {};
    for (int i = n; i > 0; i--) {
        list.push_back(i);
    }
    return list;
}