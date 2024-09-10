/* Q13. 186. Reverse Words in a String II
Medium
771
125
Add to List
Share
Given a character arrays, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by a single space.
Your code must solve the problem in-place, i.e. without allocating extra space.
Example 1:
Input: s = ["t","h", "e"," ","s","k","y"," ","i","s"," ","b","l","u", "e"]
Output: ["b","l","u","e","","i","s"," ","s","k", "y"," ","t","h","e"]
Example 2:
Input: s ["a"]
Output: ["a"] */

#include <iostream>
#include <vector>

using namespace std;

void reverseWord(vector<char> &s)
{

    vector<char> temp = {};
    vector<char> ans = {};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            temp.insert(temp.begin(), s[i]);
        }
        else
        {
            for (int j = 0; j < temp.size(); j++)
            {
                ans.push_back(temp[j]);
            }
            ans.push_back(' ');
            temp = {};
        }
    }

    // Last Word
    int i = s.size() - 1;
    while (s[i] != ' ')
    {
        ans.push_back(s[i]);
        i--;
    }

    // Copy
    s = ans;
}

int main()
{

    vector<char> s = {'m', 'y', ' ', 'n', 'a', 'm', 'e', ' ', 'i', 's'};

    reverseWord(s);

    cout << "Response ==> " << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }

    return 0;
}