#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T, typename U>
class Pair {
    public:
        Pair(const T& first, const U& second) : first_(first), second_(second) { };
        T& get_first() { return first_; };
        U& get_second() { return second_; };
        void show() const {
            cout << '{' << first_ << ',' << second_ << '}';
        }
    private:
        T first_;
        U second_;
};

bool compare_func_string(Pair<string, int>& pair1, Pair<string, int>& pair2) {
    return pair1.get_first() < pair2.get_first();
}

bool compare_func_int(Pair<string, int>& pair1, Pair<string, int>& pair2) {
    return pair1.get_second() < pair2.get_second();
}

void sort_by_first(vector<Pair<string, int>>& set) {
    sort(set.begin(), set.end(), compare_func_string);
}

void sort_by_second(vector<Pair<string, int>>& set) {
    sort(set.begin(), set.end(), compare_func_int);
}

void show(vector<Pair<string, int>> set) {
    cout << '{';
    for (size_t i = 0; i < set.size(); i++) {
        set[i].show();
    }
    cout << '}' << endl;
}

int main() {
    { vector<Pair<string, int>> persons = { {"Maria",17},{"Ana",21},{"Pedro",19} };
  sort_by_first(persons);
  show(persons); cout << '\n'; }
    return 0;
}