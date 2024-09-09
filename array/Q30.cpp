/* Q30. Check if String is Palindrome or Not. */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool palindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;

    while (s <= e)
    {
        if (toLowerCase(str[s]) != toLowerCase(str[e]))
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    string str = "cabbAC";

    cout << (palindrome(str) ? "Ture" : "False");

    return 0;
}