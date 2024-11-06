/* Q4: 451. Sort Characters By Frequency
Attempted
Medium
Topics
Companies

Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.



Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.

Example 3:

Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.

*/

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

string freqOfStr(string str)
{
    // Step 1: Calculate the frequency of each character
    map<char, int> freq;
    for (int idx = 0; idx < str.size(); idx++)
    {
        char c = str[idx];
        freq[c]++;
    }

    // Step 2: Copy frequency data to a vector of pairs
    vector<pair<char, int>> freqVec(freq.begin(), freq.end());

    // Step 3: Sort the vector by frequency in descending order
    sort(freqVec.begin(), freqVec.end(), [&](pair<char, int> c1, pair<char, int> c2)
         { return c1.second > c1.second; });

    // Step 4: Build the resulting string
    string res;

    for(auto p : freqVec){
        res += string(p.second, p.first);
    }

    return res;
}
int main()
{
    string str;
    // cin >> str;

    str = "loveleetcode";

    cout << endl
         << endl;
    cout << "RESPONSE ==> " << freqOfStr(str);
    cout << endl
         << endl;

    return 0;
}