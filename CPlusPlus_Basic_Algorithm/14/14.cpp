//14. Write a C++ program to check two given integers 
// whether either of them is in the range 100..200 inclusive.

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if ((a >= 100 && a <= 200) || (b >= 100 && b <= 200)) {
		cout << true;
	}
	else {
		cout<<false;
	}
	return 0;

}