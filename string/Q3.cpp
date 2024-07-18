// Q3. 2423. Remove Letter To Equalize Frequency.
/*
You are given a 0-indexed string word, consisting of lowercase English letters. You need to select one index and remove the letter at that index from word so that the frequency of every letter present in word is equal.
Return true if it is possible to remove one letter so that the frequency of all letters in word are equal, and false otherwise.
Note:
    The frequency of a letter x is the number of times it occurs in the string.
    You must remove exactly one letter and cannot choose to do nothing.
Example 1:
Input: word = "abcc"
Output: true
Explanation: Select index 3 and delete it: word becomes "abc" and each character has a frequency of 1.
Example 2:
Input: word = "aazz"
Output: false
Explanation: We must delete a character, so either the frequency of "a" is 1 and the frequency of "z" is 2, or vice versa. It is impossible to make all present letters have equal frequency.
Constraints:
    2 <= word.length <= 100
    word consists of lowercase English letters only.
*/
#include <bits/stdc++.h>
using namespace std;
bool equalFrequency(string paramWord)
{
    if (paramWord.size() < 2 || paramWord.size() > 100)
    {
        return false;
    }
    string word = paramWord;
    vector<pair<char, int>> feq;
    int occure = 0;
    // Remove Element
    // abbcc
    for (int idx = 0; idx <= word.size(); idx++)
    {
        word = paramWord;
        feq.clear();
        // Remove Element
        word.erase(idx, 1);
        // Create Fequency Vector Pair
        occure = 0;
        for (int feqidx = 0; feqidx < word.size(); feqidx++)
        {
            for (int feqtra = 0; feqtra < word.size(); feqtra++)
            {
                if (word[feqidx] == word[feqtra])
                {
                    occure++;
                }
            }
            feq.push_back(make_pair(word[feqidx], occure));
            occure = 0;
        }
        bool testFeq = true;
        // Check All the element fequency is same so return true otherwise return false
        for (int com_i = 0; com_i < feq.size(); com_i++)
        {
            if (feq[0].second != feq[com_i].second)
            {
                testFeq = false;
                break;
            }
        }
        if (testFeq)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string word = "ccca";
    cout << (equalFrequency(word) ? "True" : "False") << endl;
    return 0;
}