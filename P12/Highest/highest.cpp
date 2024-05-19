#include <string>
#include <map>
#include <list>

std::string student_highest_avg(std::map<std::string, std::list<int>> m) {
    float highest = 0;
    std::string highest_avg_student;
    for (auto student : m) {
        float sum = 0.0;
        size_t count = student.second.size();
        for (int i : student.second) {
            sum += i;
        }
        if ((sum / float(count)) > highest) {
            highest = sum / float(count);
            highest_avg_student = student.first;
        }
    }
    return highest_avg_student;
}

int main() {
    return 0;
}