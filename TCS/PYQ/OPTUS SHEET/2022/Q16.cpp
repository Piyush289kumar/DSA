#include <bits/stdc++.h>

using namespace std;

string encode()
{

    vector<string> allWord(3);

    for (int i = 0; i < allWord.size(); i++)
    {
        cin >> allWord[i];
        if(allWord[i].size() > 5){
            return "INVALID INPUT!";
        }
    }

    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < allWord[0].size(); i++)
    {
        if (find(vowels.begin(), vowels.end(), allWord[0][i]) != vowels.end())
        {
            allWord[0][i] = '%';
        }
    }

    for (int i = 0; i < allWord[1].size(); i++)
    {
        if (find(vowels.begin(), vowels.end(), allWord[1][i]) == vowels.end())
        {
            allWord[1][i] = '#';
        }
    }
    transform(allWord[2].begin(), allWord[2].end(), allWord[2].begin(), ::toupper);

    return allWord[0] + allWord[1] + allWord[2];
}

int main()
{
    cout << encode() << endl;
    return 0;
}