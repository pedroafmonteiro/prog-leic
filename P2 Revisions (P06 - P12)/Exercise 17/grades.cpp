#include "Student.h"

using namespace std;

Student::Student(const std::string &id) : id_(id), courses_({}) { }

std::string Student::get_id() const {
    return id_;
}

void Student::add(const course &c) {
    courses_.push_back(c);
}

double Student::avg() const {
    if (courses_.size() != 0) {
        double sum_credit_grade, sum_credit;
        for (size_t i = 0; i < courses_.size(); i++) {
            sum_credit_grade += (courses_[i].credits * courses_[i].grade);
            sum_credit += courses_[i].credits;
        }
        return (sum_credit_grade / sum_credit);
    }
    return 0.0;
}

int main() {
    return 0;
}