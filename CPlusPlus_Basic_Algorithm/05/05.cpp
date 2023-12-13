//5. Write a C++ program to create a string where 'if' is added to the front of a given string. 
// If the string already begins with 'if', return the string unchanged.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    if (input.length() > 2 && input.substr(0, 2) == "if") {
        cout << input << endl;
    }
    else {
        input = "if " + input;
        cout << input << endl;
    }
    return 0;
}