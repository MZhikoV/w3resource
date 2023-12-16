// 17. Write a C++ program to check if the string 'yt' appears at index 1 in a given string. 
// If it appears return a string without 'yt' otherwise return the original string.
//
#include <iostream>
#include <string>

using namespace std;


int main()
{
    string input;
    cin >> input;

    //string check = input.substr(1, 2);

    //if (check == "yt") {
    //    input = input.erase(1, 2);
    //}
    //cout << input;

    cout << ((input.substr(1, 2) == "yt") ? input.erase(1, 2) : input) << endl;

    return 0;
}
