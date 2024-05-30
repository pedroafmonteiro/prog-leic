#include <string>
#include <map>
#include <list>
#include <iostream>

using namespace std;

string student_highest_avg(map<string, list<int>> m) {
    double highest_average = 0.0;
    string student;
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        int sum = 0;
        int count = 0;
        for (auto itr2 = (*itr).second.begin(); itr2 != (*itr).second.end(); itr2++) {
            sum += *itr2;
            count++;
        }
        double average_number = static_cast<double>(sum) / count;
        string average_student = (*itr).first;
        if (average_number > highest_average) {
            highest_average = average_number;
            student = average_student;
        }
    }
    return student;
}

int main() {
    return 0;
}