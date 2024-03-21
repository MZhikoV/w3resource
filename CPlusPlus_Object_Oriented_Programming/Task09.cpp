//9. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
//Include member functions to calculate the grade based on the marks and display the student's information.

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

class Student {
    string name;
    string clas;
    int num;
    double marks;

    public:
    Student (const string & iName, const string & iClass, const int & iNum, const double & iMarks)
    : name(iName), clas(iClass), num(iNum), marks(iMarks) {};

    string calculateGrade() const {
      if (marks >= 90) {
        return "A+";
      } else if (marks >= 80) {
        return "A";
      } else if (marks >= 70) {
        return "B";
      } else if (marks >= 60) {
        return "C";
      } else {
        return "D";
      }
    };
    
    
    void displayInformation() const  {
        cout<<"Name: "<<name<<endl;
        cout<<"Class: "<<clas<<endl;
        cout<<"Roll number: "<<num<<endl;
        cout<<"Grade: "<<calculateGrade()<<endl;
    };


};

int main() {
    
    // Create a student object
  std::string studentName; // Variable to store student's name
  std::string sClass; // Variable to store student's class
  int rollNum; // Variable to store student's roll number
  double studentMarks; // Variable to store student's marks

  std::cout << "Student details: "; // Prompt user for student details
  std::cout << "\nName: "; // Prompt user for student's name
  std::getline(std::cin, studentName); // Input student's name

  std::cout << "Class: "; // Prompt user for student's class
  std::getline(std::cin, sClass); // Input student's class

  std::cout << "Roll number: "; // Prompt user for student's roll number
  std::cin >> rollNum; // Input student's roll number

  std::cout << "Marks (0-100): "; // Prompt user for student's marks
  std::cin >> studentMarks; // Input student's marks

  Student student(studentName, sClass, rollNum, studentMarks); // Create Student object with provided details

  // Display student information
  student.displayInformation(); // Output student's information
    
    system("pause");
    return 0;
}
