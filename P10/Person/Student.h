#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student:public Person {
public:
    const string& course() const {
        return course_;
    }
    Student(int id, const string& name, const string& course) :Person(id, name) {
        course_ = course;
    }
    string to_string() const {
        ostringstream out;
        out << Person::to_string() << '/' << course_;
        return out.str();
    }
protected:
    string course_;
};

#endif