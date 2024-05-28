#include "Date1.h"

using namespace std;

Date::Date() {
    year = 1;
    month = 1;
    day = 1;
}

Date::Date(int year, int month, int day) {
    if (day >= 1 && day <= 31) {
        this->day = day;
    }
    if (month >= 1 && month <= 12) {
        this->month = month;
    }
    if (year >= 1 && year <= 9999) {
        this->year = year;
    }
}

int Date::get_year() const {
    return year;
}

int Date::get_month() const {
    return month;
}

int Date::get_day() const {
    return day;
}

bool is_before(const Date& date1, const Date& date2) {
    if (date1.get_year() < date2.get_year()) {
        return true;
    } else if (date1.get_year() == date2.get_year()) {
        if (date1.get_month() < date2.get_month()) {
            return true;
        } else if (date1.get_month() == date2.get_month()) {
            if (date1.get_day() < date2.get_day()) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    return 0;
}