// 7. Write a C++ program to append new data to an existing text file.
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

void printF(const string &filename)
{
    ifstream inpF(filename);
    string line;
    if (inpF.is_open())
    {
        while (getline(inpF, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

int main()
{
    cout<<"Print file before changes:"<<endl;
    printF("Task07_test.txt");
    cout<<endl;

    ofstream outF;
    outF.open("Task07_test.txt",ios::app);
    if (outF.is_open()) {
        cout<<"Please, enter input:"<<endl;
        string line;
        getline(cin,line);
        outF<<line;
        outF.close();
    }

    cout<<endl;
    printF("Task07_test.txt");

    system("pause");
    return 0;
}
