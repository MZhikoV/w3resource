// Write a C++ program to open an existing text file and display its contents on the console.
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

int main()
{

    // read data from file
    ifstream inpF("Task02_test.txt");

    if (inpF.is_open())
    {

        vector<string> inpV;
        string rowT;
        while (getline(inpF, rowT))
        {
            inpV.push_back(rowT);
        }

        for (string el : inpV)
        {
            cout << el << endl;
        }

        inpF.close(); //closing the file used
    }
    else
    {
        cout << "Error loading file!" << endl;
    }

    system("pause");
    return 0;
}
