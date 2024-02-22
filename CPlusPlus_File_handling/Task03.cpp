//Write a C++ program to count the number of lines in a text file.
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
#include <fstream>


using namespace std;



int main() {

ifstream inpF("Task03_test.txt");
int rows=0;

if (inpF.is_open()){
string row;
while (getline(inpF,row)) {
        rows++;
}
}
else {
    cout<<"Error reading from file!"<<endl;
}

cout<<rows<<endl;   
    system("pause");
    return 0;
}
