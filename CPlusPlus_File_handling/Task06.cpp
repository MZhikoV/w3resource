// Write a C++ program to find and replace a specific word in a text file.
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
    while (getline(inpF, line))
    {
        cout << line << endl;
    }
}

int main()
{

    ifstream inpF("Task06_test.txt");
    ofstream outF("Task06_result.txt");

    if (inpF.is_open() && outF.is_open())
    {

        string sWord = "text";
        string rWord = "data";

        cout << "Search word: " << sWord << endl;
        cout << "Replace word: " << rWord << endl;

        cout << endl;
        cout << "Before find/replce:" << endl;
        printF("Task06_test.txt");

        string line;

        while (getline(inpF, line))
        {
            size_t fidx = line.find(sWord);

            while (fidx != string::npos)
            {
                line.replace(fidx, sWord.length(), rWord);
                fidx = line.find(sWord, fidx + rWord.length());
            }

            outF << line << endl;
        }
        cout << endl;
        cout << "After find/replace:" << endl;
        printF("Task06_result.txt");

        inpF.close();
        outF.close();
    }
    else
    {
        cout << "Error reading/writing from/to file!" << endl;
    }

    system("pause");
    return 0;
}
