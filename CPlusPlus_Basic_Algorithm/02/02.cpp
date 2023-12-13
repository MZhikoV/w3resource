// 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 2. Write a C++ program to find the absolute difference between n and 51. 
// If n is greater than 51 return triple the absolute difference.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;
    const int b = 51;
    if (a > b) {
        cout << 3 * abs(a - b) << endl;
    }
    else {
        cout << abs(a - b) << endl;
    }
    
    return 0;
}