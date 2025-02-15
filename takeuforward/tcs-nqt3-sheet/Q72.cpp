/* Q72: Check if the given String is Palindrome or not. */
#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string str)
{

    cout << str << endl;
    int left = 0;
    int right = str.size() - 1;
    while (left <= right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{
    string str;
    getline(cin, str);
    cout << (is_palindrome(str) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}