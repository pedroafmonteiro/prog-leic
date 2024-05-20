#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

template <typename T1, typename T2>
class Pair {
public:
    T1 first_;
    T2 second_;

    Pair(T1 first, T2 second) : first_(first), second_(second) {}

    T1 get_first() const {
        return first_;
    }

    T2 get_second() const {
        return second_;
    }

    void show() const {
        std::cout << "{" << first_ << "," << second_ << "}\n";
    }
};

template <typename T1, typename T2>
bool compare_first(const Pair<T1, T2>& a, const Pair<T1, T2>& b) {
    return a.get_first() < b.get_first();
}

template <typename T1, typename T2>
bool compare_second(const Pair<T1, T2>& a, const Pair<T1, T2>& b) {
    return a.get_second() < b.get_second();
}

template <typename T1, typename T2>
void sort_by_first(std::vector<Pair<T1, T2>>& v) {
    std::sort(v.begin(), v.end(), compare_first<T1, T2>);
}

template <typename T1, typename T2>
void sort_by_second(std::vector<Pair<T1, T2>>& v) {
    std::sort(v.begin(), v.end(), compare_second<T1, T2>);
}

template <typename T1, typename T2>
void show(const std::vector<Pair<T1, T2>>& v) {
    std::cout << "{";
    for (const auto& pair : v) {
        std::cout << "{" << pair.get_first() << "," << pair.get_second() << "}";
    }
    std::cout << "}" << std::endl;
}

