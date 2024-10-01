/* Q4: Count vowel in a string.
 */

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int countVowel(string &str)
{

    if (str.length() <= 0)
    {
        return 0;
    }

    int vowelCount = 0;

    unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for(char c : str){
        if (vowel.find(c) != vowel.end())
        {
            vowelCount++;
        }
        
    }

    return vowelCount;
}

int main()
{

    string str = "Codingninjas";

    int res = countVowel(str);

    cout << "RESPONSE ==> " << res;

    return 0;
}