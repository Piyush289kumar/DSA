/* Q15: Reverse a String.

Example : 1. "abcde" => "edcba".
*/

#include <iostream>
#include <string>

using namespace std;

// Solution 1
// string reverseString(string str)
// {
//     if (str.length() == 0)
//         return str;

//     char lastChar = str.back();
//     str.pop_back();
//     return lastChar + reverseString(str);
// }

// Solution 2

string reverseString(string &str, int start, int end)
{
    if (start >= end)
        return str;

    swap(str[start], str[end]);
    start++;
    end--;
    return reverseString(str, start, end);
}

int main()
{
    string str = "abcde";
    int start = 0;
    int end = str.length() - 1;
    cout << "RESPONSE ==> " << reverseString(str, start, end);
    return 0;
}