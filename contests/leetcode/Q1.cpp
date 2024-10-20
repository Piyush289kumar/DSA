/* Q1. Find the Sequence of Strings Appeared on the Screen
Medium
4 pt.

You are given a string target.

Alice is going to type target on her computer using a special keyboard that has only two keys:

    Key 1 appends the character "a" to the string on the screen.
    Key 2 changes the last character of the string on the screen to its next character in the English alphabet. For example, "c" changes to "d" and "z" changes to "a".

Note that initially there is an empty string "" on the screen, so she can only press key 1.

Return a list of all strings that appear on the screen as Alice types target, in the order they appear, using the minimum key presses.



Example 1:

Input: target = "abc"

Output: ["a","aa","ab","aba","abb","abc"]

Explanation:

The sequence of key presses done by Alice are:

    Press key 1, and the string on the screen becomes "a".
    Press key 1, and the string on the screen becomes "aa".
    Press key 2, and the string on the screen becomes "ab".
    Press key 1, and the string on the screen becomes "aba".
    Press key 2, and the string on the screen becomes "abb".
    Press key 2, and the string on the screen becomes "abc".

Example 2:

Input: target = "he"

Output: ["a","b","c","d","e","f","g","h","ha","hb","hc","hd","he"]



Constraints:

    1 <= target.length <= 400
    target consists only of lowercase English letters.

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> stringSequence(string target)
{
    vector<string> result; // To store the sequence of strings
    string current = "";   // Start with an empty screen

    // Iterate through each character in the target string
    for (char ch : target)
    {
        if (current.empty())
        { // Initially, append 'a'
            current = "a";
            result.push_back(current);
        }

        // Increment the last character to match the target character
        while (current.back() != ch)
        {
            if (current.back() == 'z')
            {
                current.back() = 'a'; // Wrap around 'z' to 'a'
            }
            else
            {
                current.back() = current.back() + 1; // Use Key 2 to move to the next letter
            }
            result.push_back(current);
        }

        // If we still need to append more characters, do it
        if (result.size() < target.size())
        {
            current += 'a'; // Append 'a' for the next step
            result.push_back(current);
        }
    }

    return result;
}

int main()
{
    // Example 1
    string target = "abc";
    vector<string> sequence = stringSequence(target);

    // Output the result
    for (const string &str : sequence)
    {
        cout << str << " ";
    }
    cout << endl;

    // Example 2
    target = "he";
    sequence = stringSequence(target);

    // Output the result
    for (const string &str : sequence)
    {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}