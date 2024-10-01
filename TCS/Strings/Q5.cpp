/* Q5: Lower case to upper case
Difficulty: BasicAccuracy: 74.85%Submissions: 29K+Points: 1

Given a string str containing only lowercase letters, generate a string with the same letters, but in uppercase.

Example 1:

Input:
str = "geeks"
Output: GEEKS

Example 2:

Input:
str = "geeksforgeeks"
Output: GEEKSFORGEEKS

Your Task:
You don't need to read input or print anything. Your task is to complete the function to_upper() which takes the string str as an argument and returns the resultant string.

Expected Time Complexity: O(length of the string).
Expected Auxiliary Space: O(1).
*/

#include <iostream>
#include <string>

using namespace std;

string to_upper(string &str)
{
    string ans;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    return str;
}

int main()
{
    string str = "geeksforgeeks";

    string res = to_upper(str);

    cout << res << endl;

    return 0;
}