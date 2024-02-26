//1. Write a C++ program to implement a class called Circle that has private member variables for radius.
//Include member functions to calculate the circle's area and circumference.
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

class Circle {
    private:
        double radius;
        double area; //=radius*radius*3.14;
        double circumF; //=2*3.14*radius;

        public:

        Circle (double rad):
        radius(rad),
        area(rad*rad*3.14),
        circumF(2*3.14*rad) {}

        //getters
        double getRad() {
            return this->radius;
        };
        double getArea() {
            return this->area;
        };
        double getCircumF() {
            return this->circumF;
        }

        //setters
        void setRadius (double rad) {
            this->radius=rad;
            this->area=rad*rad*3.14;
            this->circumF=2*3.14*rad;
        };


        string printRes();

};

string Circle::printRes() {
    ostringstream ostr;
    ostr<<"Radius= "<<getRad()<<endl;
    ostr<<"Area= "<<getArea()<<endl;
    ostr<<"Circumference= "<<getCircumF()<<endl;

    return ostr.str();
}



int main() {
    
    double rad;
    cin>>rad;

    Circle c1(rad);

    cout<<c1.printRes()<<endl;

    c1.setRadius(2);

    cout<<c1.printRes()<<endl;


    system("pause");
    return 0;
}
