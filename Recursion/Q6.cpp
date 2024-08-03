/* Q6: Reverse a string. */
#include <bits/stdc++.h>
using namespace std;
string reverseStr(string str, int start)
{
    int end = str.size() - 1;
    if (start == end)
        return str;
    swap(str[start], str[end]);
    return reverseStr(str, start + 1);
}
int main()
{
    string s = "abc";
    int first = 0;
    string reversed = reverseStr(s, first);
    cout << "OUTPUT : " << reversed;
    return 0;
}