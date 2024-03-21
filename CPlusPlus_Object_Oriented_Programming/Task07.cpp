//7. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary.
//Include member functions to calculate and set salary based on employee performance.

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

class Employee {
    string name;
    int ID;
    double salary;

    public:
    Employee (const string & inpName, const int & inpID, const double & inpSalaty)
    : name(inpName), ID(inpID), salary(inpSalaty) {};

    double getSalary() const {
        return this->salary;
    };

    double calculateSalary(const double & coef) {
        return salary*=coef;
    };

};



int main() {
    
    // Create an employee object
  std::string empName; // Define variable to store employee name
  int empId; // Define variable to store employee ID
  double empSalary; // Define variable to store employee salary

  std::cout << "Input employee name: "; // Prompt user to input employee name
  std::cin >> empName; // Input for employee name

  std::cout << "Input employee ID: "; // Prompt user to input employee ID
  std::cin >> empId; // Input for employee ID

  std::cout << "Input employee salary: "; // Prompt user to input employee salary
  std::cin >> empSalary; // Input for employee salary

  Employee employee(empName, empId, empSalary); // Create Employee object with provided details

  // Calculate and display initial salary
  std::cout << "Initial salary: " << employee.getSalary() << std::endl; // Output initial salary

  // Perform salary calculation based on performance rating
  double performanceRating; // Define variable to store performance rating
  std::cout << "Input performance rating (0.0-1.2): "; // Prompt user to input performance rating
  std::cin >> performanceRating; // Input for performance rating

  employee.calculateSalary(performanceRating); // Calculate updated salary based on performance

  // Display updated salary
  std::cout << "Updated salary: " << employee.getSalary() << std::endl; // Output updated salary
    
    system("pause");
    return 0;
}


/*
Input employee name: Florizan
Input employee ID: 12
Input employee salary: 1500
Initial salary: 1500
Input performance rating (0.0-1.2): 1.2
Updated salary: 1800
*/