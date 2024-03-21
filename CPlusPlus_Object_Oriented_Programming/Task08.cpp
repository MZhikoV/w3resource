//8. Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
//Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

class Date {
    int day;
    int month;
    int year;

    public:
    Date(const int & iday, const int & imonth, const int & iyear) :
    day(iday), month(imonth), year(iyear) {};

    void setDate(const int & sday, const int & smonth, const int & syear) {
        day=sday;
        month=smonth;
        year=syear;
    };

    int getDay() const {
        return this->day;
    };

    int getMonth() const {
        return this->month;
    };

    int getYear() const {
        return this->year;
    };

    bool isValidDate() {
        if (day<=0 || year<0) {
            return false;
        };
        if (month<=0 || month>12) {
            return false;
        };

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: if (day>31) return false; break;
        case 2: if (day>28) return false; break;
        case 4:
        case 6:
        case 9:
        case 11: if (day>30) return false; break;
        };
        return true;
    };

};



int main() {

     // Create a date object
  Date date(0, 0, 0); // Initialize Date object with default values

  // Set the date
  int day, month, year; // Define variables to store day, month, and year
  std::cout << "Input day: "; // Prompt user to input day
  std::cin >> day; // Input for day
  std::cout << "Input month: "; // Prompt user to input month
  std::cin >> month; // Input for month
  std::cout << "Input year: "; // Prompt user to input year
  std::cin >> year; // Input for year

  date.setDate(day, month, year); // Set Date object with provided values

  // Get and display the date
  std::cout << "Date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl; // Output date

  // Validate the date
  if (date.isValidDate())
    std::cout << "The date is valid." << std::endl; // Output for a valid date
  else
    std::cout << "The date is invalid." << std::endl; // Output for an invalid date
    
    
    system("pause");
    return 0;
}
