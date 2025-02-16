/* Q93: Write a program to sort characters in a string. */
#include <bits/stdc++.h>
using namespace std;

string sortChar(string str)
{
    sort(str.begin(), str.end());
    return str;
}

int main()
{
    string str;
    getline(cin, str);
    cout << sortChar(str) << endl;
    return 0;
}