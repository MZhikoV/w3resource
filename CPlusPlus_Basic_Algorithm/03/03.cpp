// 03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << ((a + b == 30 || a == 30 || b == 30) ? true : false) << endl;
    return 0;
}