// 19. Write a C++ program to check which number is closest to the value 100 among two given integers.
//  Return 0 if the two numbers are equal.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << (abs(a - 100) == abs(b - 100) ? 0 : (abs(a - 100) < abs(b - 100) ? a : b)) << endl;

    return 0;
}
