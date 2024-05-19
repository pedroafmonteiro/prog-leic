#include "Date2.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int Date::num_days(int year, int month){
    
    if(((year%4 == 0) && !((year%100 == 0) && !(year%400 == 0))) && (month == 2)){                  // A expressão (!((year%100 == 0) && !(year%400 == 0))) vai ser falsa apenas quando o ano for múltiplo de 100 mas não de 400
        return 29;                                                                                  // logo, a expressão ((year%4 == 0) && !((year%100 == 0) && !(year%400 == 0))) é um detetor de anos bissextos.
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

    int number = num_days(year, month);                                                                     //não me preocupo com a possibilidade de haver um valor errado nesta chamada porque 
                                                                                                            //se ele existir, vai ser detetado e tratado na instrução a seguir.
    if((year <= 9999) && (year >= 1) && (month > 0) && (month < 13) && (day > 0) && (day <= number)){
        return true;
    }
    return false;
}

Date::Date(const std::string& year_month_day){
    
    int rec;
    bool flag = false;
    char lixo1, lixo2;
    std::istringstream iss(year_month_day);

    if(iss >> rec){
        year = rec;
    }
    else{
        flag = true;
    }
    iss >> lixo1;

    if(iss >> rec){
        month = rec;
    }
    else{
        flag = true;
    }
    iss >> lixo2;

    if(iss >> rec){
        day = rec;
    }
    else{
        flag = true;
    }

    if((!((*this).is_valid())) || (lixo1 != '/') || (lixo2 != '/') || (flag == true)){
        year = 0;
        month = 0;
        day = 0;
    }
    
}

int Date::get_year() const{
    return year;
}

int Date::get_month() const{
    return month;
}

int Date::get_day() const {
    return day;
}

Date::Date(int year, int month, int day){
    (*this).year = year;
    (*this).day = day;
    (*this).month = month;

    if(!((*this).is_valid())){
        (*this).year = 0;
        (*this).month = 0;
        (*this).day = 0;
    }
}

Date::Date(){
    year = 1;
    month = 1;
    day = 1;
}