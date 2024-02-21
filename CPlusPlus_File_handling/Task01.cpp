//Write a C++ program to create a new text file and write some text into it.
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

    //create file to be written on
    ofstream outputF("Task01_test.txt");

    if (outputF.is_open()) {        //check if the file is open
        outputF<<"First row of text"<<endl;
        outputF<<"Second row of text"<<endl;
        outputF<<"Third row of text"<<endl;
        outputF<<"Last row of text"<<endl;

        outputF.close();

        cout<<"Text has been written to the file"<<endl;
    }
    else {
        cout<<"Failed to create the file"<<endl;
    }

    ifstream inpF("Task01_test.txt");

    vector<string> inpV;
    string rowT;
    while (getline(inpF,rowT)) {
        inpV.push_back(rowT);
    }

    for (string el:inpV) {
        cout<<el<<endl;
    }
    
    
    system("pause");
    return 0;
}
