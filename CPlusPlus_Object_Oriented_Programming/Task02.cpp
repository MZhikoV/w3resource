//2. Write a C++ program to create a class called Rectangle that has private member variables for length and width.
//Implement member functions to calculate the rectangle's area and perimeter.
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

class Rectangle {
    private:
    double length=0;
    double width=0;
    double area;
    double perim;

    public:

    Rectangle (double lenInp,double widInp) :
    length(lenInp),
    width(widInp),
    area (length*width),
    perim(2*(length+width)) {};

    //setters
    void setVars(double len,double wid){
        this->length=len;
        this->width=wid;
        this->area=length*width;
        this->perim=2*(length+width);
    };

    //getters

    double getLen() {
        return this->length;
    };

    double getWid() {
        return this->width;
    };

    double getArea() {
        return this->area;
    };

    double getPerim() {
        return perim;
    };


    string printRes();

  // string someFunc();


};

string Rectangle::printRes(){
    ostringstream ostr;
    ostr<<"Length= "<<getLen()<<endl;
    ostr<<"Width= "<<getWid()<<endl;
    ostr<<"Area= "<<getArea()<<endl;
    ostr<<"Perimeter= "<<getPerim()<<endl;

    return ostr.str();
}



int main() {
    
    int len,wid;
    cin>>len>>wid;

    Rectangle r1(len,wid);

   cout<<r1.printRes();

    r1.setVars(10,10);

   cout<<r1.printRes();
    
    system("pause");
    return 0;
}
