/* Q74: Find the ASCII value of a character. */
#include <bits/stdc++.h>
using namespace std;

int ascii_value(char ch)
{
    return (int)ch;
}
int main()
{
    char ch;
    cin >> ch;
    cout << ascii_value(ch) << endl;
    return 0;
}