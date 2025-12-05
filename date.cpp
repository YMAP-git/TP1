#include <iostream>
#include "date.h"
using namespace std;

Date::Date(): day_(1), month_(1), year_(1970) {}
Date::Date(int day, int month, int year): day_(day), month_(month), year_(year) {}
void Date::printDate() const
{
     if(day_ <1 || day_ > 31 || month_ < 1 || month_ > 12 || year_ <= 0 || year_ > 9999 || (month_ == 2 && day_ > 29) ||
        ((month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11) && day_ > 30)) {
        cout << "Invalid date provided." << endl;
        return ;
    }
    cout << day_ << "/" << month_ << "/" << year_ << endl;
}