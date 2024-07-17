// Q2. Integer to Roman.
#include <bits/stdc++.h>
using namespace std;
string numberToRoman(int paramNumber)
{
    string Roman = "";
    vector<pair<int, string>> storeIntRoman = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}};
    for (int idx = 0; idx < storeIntRoman.size(); idx++)
    {
        while (paramNumber >= storeIntRoman[idx].first)
        {
            Roman += storeIntRoman[idx].second;
            paramNumber -= storeIntRoman[idx].first;
        }
    }
    return Roman;
}
int main()
{
    int number = 3749;
    string RomanString = numberToRoman(number);
    cout << RomanString;
}
