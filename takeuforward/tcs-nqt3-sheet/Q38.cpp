/* Q38: Check if given year is a leap year or not. */

#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year)
{

    if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }

    return false;
}
int main()
{
    int year;
    cin >> year;
    cout << (isLeapYear(year) ? "Yes" : "No") << endl;
    return 0;
}