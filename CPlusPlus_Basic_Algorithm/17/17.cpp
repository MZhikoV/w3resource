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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
