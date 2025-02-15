/* Q73: Count number of vowels, consonants, spaces in String. */
#include <bits/stdc++.h>
using namespace std;

void countVCBS(string str)
{
    string vowels = "aeiouAEIOU";
    int vowelsCnt = 0;
    int consonantCnt = 0;
    int bspaceCnt = 0;

    for (auto ch : str)
    {
        if (ch == ' ')
        {
            bspaceCnt++;
        }
        else
        {
            if (isalpha(ch))
            {
                if (find(vowels.begin(), vowels.end(), ch) != vowels.end())
                {
                    vowelsCnt++;
                }
                else
                {
                    consonantCnt++;
                }
            }
        }
    }

    cout << "Vowels: " << vowelsCnt << endl;
    cout << "Consonants: " << consonantCnt << endl;
    cout << "White spaces: " << bspaceCnt << endl;
}

int main()
{
    string str;
    getline(cin, str);
    countVCBS(str);
    return 0;
}