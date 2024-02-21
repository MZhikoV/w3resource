//Write a C++ program to dynamically allocate memory for a character and a string. Input a character and a string from the user.
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <memory>

using namespace std;



int main() {

    char * alpha=new char;
    cin>>*alpha;

    string * beta= new string;
    cin>>*beta;

    cout<<*alpha<<endl;
    cout<<*beta<<endl;

    delete alpha;
    delete beta;
    
    
    system("pause");
    return 0;
}
