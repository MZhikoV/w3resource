#include <iostream>
#include <string>
#include <stack>

using namespace std;

void printStack(stack<int>numbers) {
	while (!numbers.empty()) {
		cout << numbers.top() << ' ';
		numbers.pop();
	}
	cout << endl;
}

int main()
{
	stack<int>data;
	cout << (data.empty()) << endl;

	int num;
	cin >> num;
	while (num--) {
		int elem;
		cin >> elem;
		data.push(elem);
	}
	
	data.pop();

	printStack(data);

	cout << data.top() << endl;

	return 0;
}

/*
1. Write a C++ program to implement a stack using an array with push and pop operations.
Find the top element of the stack and check if the stack is empty or not.
Test Data:
Create a stack object:
Check the stack is empty or not? 1
Insert some elements onto the stack:
Stack elements: 4 5 6 7
Remove an element from the stack! 4
Stack elements: 5 6 7
Top of the element of the stack:
5
*/