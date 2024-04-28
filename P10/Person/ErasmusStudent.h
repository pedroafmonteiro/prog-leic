#ifndef ERASMUSSTUDENT_H
#define ERASMUSSTUDENT_H

#include "Student.h"

class ErasmusStudent:public Student {
public:
    const string& country() const {
        return country_;
    }
    ErasmusStudent(int id, const string& name, const string& course, const string& country) :Student(id, name, course) {
        country_ = country;
    }
    string to_string() const {
        ostringstream out;
        out << Student::to_string() << '/' << country_;
        return out.str();
    }
protected:
    string country_;
};

#endif