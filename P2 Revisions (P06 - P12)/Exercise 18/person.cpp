#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Person.h"

using namespace std;

Person::Person(const std::string &name, const std::string &address, const std::string &phone) {
    name_ = name;
    address_ = address;
    phone_ = phone;
}

std::string Person::get_name() const {
    return name_;
}

std::string Person::get_address() const {
    return address_;
}

std::string Person::get_phone() const {
    return phone_;
}

void show_persons_data(const std::vector<Person>& persons);

void read_persons_data(const string& file_name, vector<Person>& persons) {
    ifstream in(file_name);
    string line, name, address, phone;
    int count = 0;
    while (getline(in, line)) {
        if (count == 0) {
            name = line;
            count++;
        } else if (count == 1) {
            address = line;
            count++;
        } else if (count == 2) {
            phone = line;
            Person p(name, address, phone);
            persons.push_back(p);
            count = 0;
        }
    }
    in.close();
}

bool compare_name(const Person& p1, const Person& p2) {
  return p1.get_name() < p2.get_name();
}

void sort_persons_by_name(vector<Person>& persons) {
    sort(persons.begin(), persons.end(), compare_name);
}

int main() {
    return 0;
}