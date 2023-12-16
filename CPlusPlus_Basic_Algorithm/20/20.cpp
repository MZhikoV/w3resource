// 20. Write a C++ program to check whether two given integers are in the range 40..50 inclusive, 
// or they are both in the range 50..60 inclusive.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (((a >= 40 && a <= 50) && (b >= 40 && b <= 50)) || ((a >= 50 && a <= 60) && (b >= 50 && b <= 60))) {
        cout << true << endl;
    }
    else {
        cout << false << endl;
    }
    return 0;
}
