// 8. Write a C++ program to sort the lines of a text file in alphabetical order.
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
    cout << "Print file before changes:" << endl;
    printF("Task08_test.txt");
    cout << endl;

    ifstream inpF("Task08_test.txt");
    ofstream outF("Task08_result.txt");
    bool isFirst = true;
    if (inpF.is_open() && outF.is_open())
    {
        string line;
        while (getline(inpF, line))
        {
            stringstream inp(line);
            vector<string> words;
            string word;
            while (inp >> word)
            {
                words.push_back(word);
            }
            sort(words.begin(), words.end());
            outF.open("Task08_result.txt", ios::app);
            for (string el : words)
            {
                if (!isFirst)
                {
                    outF << endl;
                }
                else
                {
                    isFirst = false;
                }
                outF << el << ' ';
            }
            words.clear();
        }
    }
    else
    {
        cout << "Error reading from file!" << endl;
    }

    cout << endl;
    cout<<"File after sort:"<<endl;
    printF("Task08_result.txt");

    system("pause");
    return 0;
}
