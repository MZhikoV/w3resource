//Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements.
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
int n=10;
    //Allocation of the integer array
int* arr=new int [n] {};

//Allocation of a string
string * arrStr=new string [n];

//Assigning values to the array
for (size_t i=0; i<n;i++) {
    arr[i]=i+1;
    cout<<arr[i]<<' ';

}
cout<<endl;

//Assigning values to the array
for (size_t i=0; i<n;i++) {
    arrStr[i]="Element - "+to_string(i+1)+"!";
    cout<<arrStr[i]<<endl;
    
}

delete[] arr;
delete[] arrStr;
    
    
    system("pause");
    return 0;
}
