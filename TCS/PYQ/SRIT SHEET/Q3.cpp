/* Q3 : TCS NQT Coding Question – 3
Problem Statement – Jack is always excited about Sunday. It is favorite day, when he gets to play all day. And
goes to cycling with his friends. So every time when the months starts he counts the number of sundays he
will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on. Count the
number of Sunday jack will get within n number of days.
Example 1: Input mon-> input String denoting the start of the month.
13 -> input integer denoting the number of days from the start of the month.
Output : 2 -> number of days within 13 days.
Explanation: The month start with mon(Monday). So the upcoming sunday will arrive in next 6 days. And
then next Sunday in next 7 days and so on. Now total number of days are 13. It means 6 days to first sunday
and then remaining 7 days will end up in another sunday. Total 2 sundays may fall within 13 days. */

#include <bits/stdc++.h>
using namespace std;

int numberOfSundays(string dayName, int dayCount)
{
    unordered_map<string, int> days = {
        {"sun", 0}, {"mon", 6}, {"tue", 5}, {"wed", 4}, {"thu", 3}, {"fri", 2}, {"sat", 1}};

    int firstSunday = days[dayName];
    if (firstSunday != 0)
        firstSunday = 7 - firstSunday;

    if (firstSunday >= dayCount)
        return 0;

    return (1 + ((dayCount - firstSunday) / 7));
}
int main()
{
    string dayName;
    int dayCount;
    cin >> dayName >> dayCount;
    cout << numberOfSundays(dayName, dayCount) << endl;

    return 0;
}