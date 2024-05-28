#include "Date3.h"
#include <iomanip>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

bool is_leap_year(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

Date::Date() {
    yyyymmdd = "00010101";
}

Date::Date(int year, int month, int day) {
    if (year >= 1 && year <= 9999) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day >= 1 && day <= 31) {
                stringstream ss;
                ss << setw(4) << setfill('0') << year;
                ss << setw(2) << setfill('0') << month;
                ss << setw(2) << setfill('0') << day;
                this->yyyymmdd = ss.str();
            } else {
                this->yyyymmdd = "00000000";
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day >= 1 && day <= 30) {
                stringstream ss;
                ss << setw(4) << setfill('0') << year;
                ss << setw(2) << setfill('0') << month;
                ss << setw(2) << setfill('0') << day;
                this->yyyymmdd = ss.str();
            } else {
                this->yyyymmdd = "00000000";
            }
        } else if (month == 2) {
            if (is_leap_year(year)) {
                if (day >= 1 && day <= 29) {
                    stringstream ss;
                    ss << setw(4) << setfill('0') << year;
                    ss << setw(2) << setfill('0') << month;
                    ss << setw(2) << setfill('0') << day;
                    this->yyyymmdd = ss.str();
                } else {
                    this->yyyymmdd = "00000000";
                }
            } else {
                if (day >= 1 && day <= 28) {
                    stringstream ss;
                    ss << setw(4) << setfill('0') << year;
                    ss << setw(2) << setfill('0') << month;
                    ss << setw(2) << setfill('0') << day;
                    this->yyyymmdd = ss.str();
                } else {
                    this->yyyymmdd = "00000000";
                }
            }
        }
    } else {
        this->yyyymmdd = "00000000";
    }
}

Date::Date(const std::string& year_month_day) {
    string part;
    int year_, month_, day_;
    istringstream iss(year_month_day);
    int position = 1;
    while (getline(iss, part, '/')) {
        if (position == 1) {
            if (all_of(part.begin(), part.end(), ::isdigit)) {
                year_ = stoi(part);
                position++;
            } else {
                year_ = 0;
                month_ = 0;
                day_ = 0;
                break;
            }
        } else if (position == 2) {
            if (all_of(part.begin(), part.end(), ::isdigit)) {
                month_ = stoi(part);
                position++;
            } else {
                year_ = 0;
                month_ = 0;
                day_ = 0;
                break;
            }
        } else if (position == 3) {
            if (all_of(part.begin(), part.end(), ::isdigit)) {
                day_ = stoi(part);
            } else {
                year_ = 0;
                month_ = 0;
                day_ = 0;
                break;
            }
        }
    }
    if (year_ == 0 && month_ == 0 && day_ == 0) {
        this->yyyymmdd = "00000000";
    } else {
        *this = Date(year_, month_, day_);
    }
}

bool Date::is_valid() const {
    if (get_day() == 0 && get_month() == 0 && get_year() == 0) {
        return false;
    }
    return true;
}

int Date::get_year() const {
    return stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const {
    return stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const {
    return stoi(yyyymmdd.substr(6, 2));
}

int main() {
    Date d4("1900/1/1"); d4.write(); cout << (d4.is_valid() ? "" : "-invalid") << endl;
    return 0;
}