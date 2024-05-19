#include "Date3.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int Date::get_year() const{
    return (yyyymmdd[0] - '0')*1000 + (yyyymmdd[1] - '0')*100 + (yyyymmdd[2] - '0')*10 + yyyymmdd[3] - '0';
}

int Date::get_month() const{
    return (yyyymmdd[4] - '0')*10 + yyyymmdd[5] - '0';
}

int Date::get_day() const {
    return (yyyymmdd[6] - '0')*10 + yyyymmdd[7] - '0';
}

int Date::num_days(int year, int month){
    
    if(((year%4 == 0) && !((year%100 == 0) && !(year%400 == 0))) && (month == 2)){                  
        return 29;                                                                                  
    }
    else if(!((year%4 == 0) && !((year%100 == 0) && !(year%400 == 0))) && (month == 2)){
        return 28;
    }
    else if((month == 11) || (month == 4) || (month == 6) || (month == 9)){
        return 30;
    }
    else{
        return 31;
    }
}

bool Date::is_valid() const{

    int year = (*this).get_year();
    int month = (*this).get_month();
    int day = (*this).get_day();
    int number = num_days(year, month);                                                                     

    if((year <= 9999) && (year >= 1) && (month > 0) && (month < 13) && (day > 0) && (day <= number)){
        return true;
    }
    return false;
}

Date::Date(const std::string& year_month_day){
    
    int rec;
    std::string temp = "";
    bool flag = false;
    char lixo1, lixo2;
    int empatar = 2;
    std::istringstream iss(year_month_day);

    if(iss >> rec){
        temp = std::to_string(rec);
        while(temp.size() < 4){
            temp = "0" + temp;
        }
        yyyymmdd = yyyymmdd + temp;
    }
    else{
        flag = true;
    }

    if(iss >> lixo1){
        empatar--;
    }
    else{
        flag = true;
    }

    if(iss >> rec){
        temp = std::to_string(rec);
        while(temp.size() < 2){
            temp = "0" + temp;
        }
        yyyymmdd = yyyymmdd + temp;
    }
    else{
        flag = true;
    }

    if(iss >> lixo2){
        empatar--;
    }
    else{
        flag = true;
    }

    if(iss >> rec){
        temp = std::to_string(rec);
        while(temp.size() < 2){
            temp = "0" + temp;
        }
        yyyymmdd = yyyymmdd + temp;
    }
    else{
        flag = true;
    }

    if((!((*this).is_valid())) || (lixo1 != '/') || (lixo2 != '/') || (flag == true)){
        yyyymmdd = "00000000";
    }
    
}

Date::Date(int year, int month, int day){
    
    std::string a(std::to_string(year));
    while(a.size() != 4){
        a = "0" + a;
    }

    std::string b = std::to_string(month);
    while(b.size() != 2){
        b = "0" + b;
    }

    std::string c = std::to_string(day);
    while(c.size() != 2){
        c = "0" + c;
    }

    yyyymmdd = a + b + c;

    if(!((*this).is_valid())){
        yyyymmdd = "00000000";
    }
}

Date::Date(){
    yyyymmdd = "00010101";
}