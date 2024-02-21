//1. Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <memory>

using namespace std;



int main() {


    //Allocating memory and assigning values
    int * someInt=new int;
    *someInt=20;

    char * someChar= new char;
    *someChar='a';

    string * someStr= new string;
    *someStr="You are welcome!";

    //Print values and addresses
    cout<<*someInt<<" at "<<someInt<<endl;
    cout<<*someChar<<" at "<<someChar<<endl;
    cout<<*someStr<<" at "<<someStr<<endl;

    //Deallocate memory
    delete someInt;
    delete someChar;
    delete someStr;    
    
    system("pause");
    return 0;
}
