/* Q19:  Remove Consecutive Duplicates
Easy
0/40
Contributed by
82 upvotes
Asked in companies
Problem statement

You are given a string ‘str’ of size ‘N’. Your task is to remove consecutive duplicates from this string recursively.

For example:

If the input string is ‘str’ = ”aazbbby”, then your output will be “azby”.
Note that we are just removing adjacent duplicates.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:

2
7
aazbbby
6
aabbcb

Sample Output 1:

azby
abcb

Explanation of Sample Input 1:

Test Case 1:

Given ‘str' = ”aazbbby”
After removing adjacent duplicates string will be “azby”

Test Case 2:

Given ‘str’ = “aabbcb”
After removing adjacent duplicates string will be “abcb”

Sample Input 2:

2
5
abcde
5
aaaaa

Sample Output 2:

abcde
a

Explanation of Sample Input 2:

Test Case 1:

Given ‘str' = ”abcde”
There are no duplicates in the input string so the final string will be “abcde”

Test Case 2:

Given ‘str’ = “aaaaa”
After removing adjacent duplicates string will be “a”

*/

#include <bits/stdc++.h>

using namespace std;

string removeDuplicate(string &s)
{
    unordered_set<char> seen;
    string res;

    for(char ch : s){
        if(seen.find(ch) == seen.end()){
            res.push_back(ch);
            seen.insert(ch);
        }
    }

    return res;
}

int main()
{
    string s = "abcde";

    cout << "RESPONSE == > " << removeDuplicate(s);

    return 0;
}