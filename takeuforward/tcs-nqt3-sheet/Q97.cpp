/* Q97: Concatenate one string to another. */
#include <bits/stdc++.h>
using namespace std;

string con(string str1, string str2)
{
    return str1.append(str2);
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << con(str1, str2) << endl;
    return 0;
}