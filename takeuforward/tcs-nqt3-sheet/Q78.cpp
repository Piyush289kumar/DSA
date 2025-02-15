/* Q78: Reverse a String. */

#include <bits/stdc++.h>
using namespace std;

void reverseStr(string &str)
{
    int left = 0;
    int right = str.size() - 1;
    while (left <= right)
    {
        swap(str[left++], str[right--]);
    }
}

int main()
{
    string str;
    getline(cin, str);
    reverseStr(str);
    cout << str;
    return 0;
}