/* Q9: Count and display the total number of vowels, consonants, digits, and special characters in a given string.*/

#include <iostream>
#include <string>

using namespace std;

void count_chars(string str)
{
    int vowelCount = 0;
    int consonantCount = 0;
    int digitCount = 0;
    int specialCharCount = 0;

    string vowels = "aeiou";

    for (int i = 0; i < str.size(); i++)
    {
        if (vowels.find(str[i]) != string::npos)
        {
            vowelCount++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonantCount++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digitCount++;
        }
        else
        {
            specialCharCount++;
        }
    }

    cout << "Vowels : " << vowelCount << endl;
    cout << "Consonants : " << consonantCount << endl;
    cout << "Digits : " << digitCount << " Special Charcters : " << specialCharCount;

    return;
}

int main()
{
    string str = "Hellow4234*&ds@a";
    count_chars(str);

    return 0;
}