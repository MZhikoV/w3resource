//8. Write a C++ program to create a string that is 4 copies of the 2 front characters of a given string.
//If the given string length is less than 2 return the original string.

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string input;
    getline(cin, input);

    string output;

    if (input.length() < 2) {
        cout<<input;
    }
    else {
        output = input.substr(0, 2);
        for (int i = 1; i <= 4; i++) {
            cout << output;
        }
    }
    return 0;
}