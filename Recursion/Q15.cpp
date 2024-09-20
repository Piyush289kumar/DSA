/* Q15: Reverse a String.

Example : 1. "abcde" => "edcba".
*/

#include <iostream>
#include <string>

using namespace std;

string reverseString(string str)
{
    if (str.length() == 0)
        return str;

    char lastChar = str.back();
    str.pop_back();
    return lastChar + reverseString(str);
}

int main()
{
    string str = "abcde";
    cout << "RESPONSE ==> " << reverseString(str);
    return 0;
}