//Write a C++ program to dynamically allocate two two-dimensional arrays of int values and strings. Initialize its elements.
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

    int rows=4;
    int cols=4;

    //Allocate two-dimentional int array
    int ** intArr=new int *[rows];
    for (size_t r=0;r<rows;r++) {
        intArr[r]=new int[cols];
    }

    int value=0;
    for (size_t r=0;r<rows;r++) {
        for (size_t c=0;c<cols;c++) {
            intArr[r][c]=value;
            cout<<intArr[r][c]<<' ';
            value++;
        }
        cout<<endl;
    }

    //Allocate two-dimentional string array
    string ** strArr=new string *[rows];
    for (size_t r=0;r<rows;r++) {
        strArr[r]=new string[cols];
    }

    for (size_t r=0;r<rows;r++) {
        for (size_t c=0;c<cols;c++) {
            strArr[r][c]=to_string(r)+to_string(c);
            cout<<strArr[r][c]<<' ';
        }
        cout<<endl;
    }

    //Deallocate memory
        for (size_t r=0;r<rows;r++) {
        delete[] intArr[r];
        delete[] strArr[r];
    }

    delete[] intArr;
    delete[] strArr;
    
    
    system("pause");
    return 0;
}
