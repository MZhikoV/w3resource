////1. Write a C++ program to compute the sum of two given integer values. If the two values are the same,
//  then return triple their sum.
//Sample Input
//1, 2
//3, 2
//2, 2
//Sample Output :
//3
//5
//12


#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << (a == b ? 3 * (a + b) : a + b) << endl;

    return 0;
}
