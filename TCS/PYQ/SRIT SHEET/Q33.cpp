/* Q33: TCS NQT Coding Question – 33
Problem Statement – The program will receive 3 English words inputs from STDIN
1. These three words will be read one at a time, in three separate line
2. The first word should be changed like all vowels should be replaced by %
3. The second word should be changed like all consonants should be replaced by #
4. The third word should be changed like all char should be converted to upper case
5. Then concatenate the three words and print them
Other than this concatenated word, no other characters/string should, or message should be written to
STDOUT For example if you print how are you then output should be h%wa#eYOU. You can assume that
input of each word will not exceed more than 5 chars
*/

#include <bits/stdc++.h>
using namespace std;

void transformString(string &str, bool isVowelsReplace)
{
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (auto &ch : str)
    {
        if (isVowelsReplace)
        {
            if (vowels.count(ch))
            {
                ch = '%';
            }
        }
        else
        {
            if (vowels.count(ch))
            {
                ch = '#';
            }
        }
    }
}

int main()
{
    vector<string> str(3);
    for (int idx = 0; idx < 3; idx++)
    {
        cin >> str[idx];
    }

    transformString(str[0], true);
    transformString(str[1], false);
    transform(str[2].begin(), str[2].end(), str[2].begin(), ::toupper);

    cout << str[0] << str[1] << str[2] << endl;

    return 0;
}