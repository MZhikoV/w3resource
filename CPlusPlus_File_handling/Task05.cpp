//5. Write a C++ program to copy the contents of one text file to another.
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
    ofstream outF("Task05_result.txt");

    if (inpF.is_open() && outF.is_open()) {
        string line;
        while (getline(inpF,line)) {
            outF<<line<<endl;
        }

        inpF.close();
        outF.close();
    }
    else {
        cout<<"Error reading/writing from/to file!"<<endl;
    }

    cout<<endl;
    
    
    system("pause");
    return 0;
}
