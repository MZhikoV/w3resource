//6. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
//Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

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

class Triangle {
    double sideA;
    double sideB;
    double sideC;

    public:
    Triangle (const double & a, const double & b, const double & c)
    : sideA(a), sideB(b), sideC(c) {};

    void determineType() const {
        string result;
        if (sideA==sideB && sideB==sideC) {
            result="Equilateral Triangle";
        }
        else if (sideA==sideB || sideB==sideC || sideA==sideC) {
            result="Isosceles Triangle";
        }
        else {
            result="Scalene Triangle";
        }

        cout<<result<<endl;
    };



};



int main() {
    
    // Create a triangle object
  double s1, s2, s3; // Define variables for side lengths
  std::cout << "Input the lengths of the three sides of the triangle:\n"; // Prompt user to input side lengths
  std::cout << "Side1: ";
  std::cin >> s1; // Input for side1
  std::cout << "Side2: ";
  std::cin >> s2; // Input for side2
  std::cout << "Side3: ";
  std::cin >> s3; // Input for side3

  Triangle triangle(s1, s2, s3); // Create Triangle object with provided side lengths

  // Determine the type of triangle and output the result
  triangle.determineType(); // Call determineType method to identify the triangle type

    
    system("pause");
    return 0;
}
