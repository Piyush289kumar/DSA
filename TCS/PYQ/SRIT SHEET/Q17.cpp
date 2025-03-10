/* Q17: TCS NQT Coding Question – 17
Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The
task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the
number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.
 (*>#): positive integer
 (#>*): negative integer
 (#=*): 0
Example 1: Input 1: ###*** -> Value of S
Output : 0 → number of * and # are equal
*/

#include <bits/stdc++.h>
using namespace std;

int checkStr(string &str)
{
    int hCnt = 0, sCnt = 0;
    for (char &ch : str)
    {
        if (ch == '*')
        {
            sCnt++;
        }
        else if (ch == '#')
        {
            hCnt++;
        }
    }

    return (sCnt - hCnt);
}

int main()
{
    string str;
    getline(cin, str);
    cout << checkStr(str) << endl;
    return 0;
}