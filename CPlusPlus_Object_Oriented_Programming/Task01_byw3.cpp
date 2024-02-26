// 1. Write a C++ program to implement a class called Circle that has private member variables for radius.
// Include member functions to calculate the circle's area and circumference.
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

const double PI = 3.14;

class Circle
{
private:
    double radius;

public:
    Circle(double rad) : radius(rad) {}

    // member function for calculating the area
    double calculteArea()
    {
        return PI * radius * radius;
    }

    // member function to calculaste the citcumference of the circle

    double circumF()
    {
        return 2 * PI * radius;
    }

    string printRes();

};

int main()
{

    double rad;
    cin >> rad;

    Circle c1(rad);

    double area = c1.calculteArea();
    double circumF = c1.circumF();

    cout<<"Radius= "<<rad<<endl;
    cout<<"Area= "<<area<<endl;
    cout<<"Circumference= "<<circumF<<endl;


    rad=10;
     area = c1.calculteArea();
     circumF = c1.circumF();
    cout<<"Radius= "<<rad<<endl;
    cout<<"Area= "<<area<<endl;
    cout<<"Circumference= "<<circumF<<endl;

    system("pause");
    return 0;
}
