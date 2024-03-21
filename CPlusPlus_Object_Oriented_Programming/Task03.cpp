//Write a C++ program to create a class called Person that has private member variables 
//for name, age and country. Implement member functions to set and get the values of these variables.

#include <iostream>
#include <string>

using namespace std;

class Person {
    string name;
    int age;
    string country;

    public:
    // Person(const string & inpName, const int & inpAge, const string & inpCountry)
    // : name(inpName), age(inpAge), country(inpCountry) {};

    string getName() const {
        return this->name;
    };
    int getAge() const {
        return this->age;
    };
    string getCountry() const {
        return this->country;
    };

    void setName(const string & sname) {
        name=sname;
    };

    void setAge (const int & sAge) {
        age=sAge;
    };

    void setCountry(const string & sCountry) {
        country=sCountry;
    };
};


int main() {

// Create a person object
  Person person;

  // Set the person's details using setter functions
  person.setName("Just A Name"); // Set the person's name
  person.setAge(35); // Set the person's age
  person.setCountry("Somewhere"); // Set the person's country

  // Get and display the person's details using getter functions
  std::cout << "Name: " << person.getName() << std::endl; // Output the person's name
  std::cout << "Age: " << person.getAge() << std::endl; // Output the person's age
  std::cout << "Country: " << person.getCountry() << std::endl; // Output the person's country

    system("pause");
    return 0;
}