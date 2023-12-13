// 7. Write a C++ program to exchange the first and last characters in a given string 
// and return the result string.


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    string tempS, tempE;
    int lenS = 0;

    tempS = input[0];
    tempE = input.substr(input.length()-1, 1);

    input.erase(0, 1);
    input.erase(input.length()-1, 1);

    input.insert(0, tempE);
    input.insert(input.length(), tempS);

    cout << input << endl;

    return 0;
}