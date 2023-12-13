// 6. Write a C++ program to remove the character at a given position in the string. 
// The given position will be in the range 0..string length -1 inclusive.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    string posS;
    getline(cin, posS);

    int pos = stoi(posS);

    input.erase(pos, 1);

    cout << input << endl;

    return 0;
}