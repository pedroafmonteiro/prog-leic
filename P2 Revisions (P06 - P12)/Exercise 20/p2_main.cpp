#include "Person.h"
#include <vector>
#include <iostream>

using namespace std;

void born_before(const vector<Person>& persons, const Date& date) {
    date.show();
    cout << ": ";
    for (size_t i = 0; i < persons.size(); i++) {
        if (persons[i].get_birth_date().is_before(date)) {
            persons[i].show();
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    return 0;
}