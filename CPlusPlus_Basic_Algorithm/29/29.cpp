// 29. Write a C++ program to create a string like "aababcabcd" from a given string "abcd".
//
#include <iostream>
#include <string>

using namespace std;


int main()
{
    string st;
    cin >> st;

    string res{};

    for (int i = 0; i < st.length()-1; ) {
        res += st[i];
        for (int j = 0; j <= i && j<st.length()-1; j++) {
            res+= st[j];
        }
        i++;
    }
    res += st[st.length() - 1];
    cout << res << endl;
    return 0;
}