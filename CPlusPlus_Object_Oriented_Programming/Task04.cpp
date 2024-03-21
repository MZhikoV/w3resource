//4. Write a C++ program to create a class called Car that has private member variables
// for company, model, and year. Implement member functions to get and set these variables.

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

class Car {
    string company;
    string model;
    int year;

    public:
    Car(const string & inpCompany, const string & inpModel, const int & inpYear) 
    : company(inpCompany), model(inpModel),year(inpYear) {};

    void setCompany(const string & sCompany) {
        company=sCompany;
    };

    void setModel(const string & sModel) {
        model=sModel;
    };

    void setYear(const int & sYear) {
        year=sYear;
    };

    string getCompany() const {
        return this->company;
    };

    string getModel() const {
        return this->model;
    };

    int getYear() const {
        return this->year;
    };
};



int main() {
    
    // Create a car object with initial values
  Car car("AUDI", "A6", 2023);

  // Get and display the car details using getter functions
  std::cout << "Company: " << car.getCompany() << std::endl; // Output the car's company name
  std::cout << "Model: " << car.getModel() << std::endl; // Output the car's model name
  std::cout << "Year: " << car.getYear() << std::endl; // Output the car's year

  // Set new values for the car using setter functions
  car.setCompany("Definetly not a BMW"); // Update the car's company name
  car.setModel("any"); // Update the car's model name
  car.setYear(2022); // Update the car's year

  // Get and display the updated car details using getter functions
  std::cout << "\nUpdated Company: " << car.getCompany() << std::endl; // Output the updated car's company name
  std::cout << "Updated Model: " << car.getModel() << std::endl; // Output the updated car's model name
  std::cout << "Updated Year: " << car.getYear() << std::endl; // Output the updated car's year
    
    system("pause");
    return 0;
}
