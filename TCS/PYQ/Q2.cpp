/* Q2: Problem Statement –
Given a string S (input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is
to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered
valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
Note: The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the
input string.
(*>#): positive integer
(#>*): negative integer
(#=*): 0
Example 1:
Input 1: ###*** -> Value of S
Output : 0 → number of * and # are equal
*/

#include <iostream>
#include <string>

using namespace std;

int isStringValid(string str)
{

    int startCount = 0;

    for (char c : str)
    {

        startCount += (c == '*') ? 1 : -1;
    }

    return startCount;
}

int main()
{
    string s = "###*#**";

    int res = isStringValid(s);

    cout << "RSEPONSE ==> " << res;

    return 1;
}