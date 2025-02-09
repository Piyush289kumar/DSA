/*
Q14. Number Series with a Twist 2
Consider the following series: 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 …
This series is a mixture of 2 series – all the odd terms in this series form a geometric series and
all the even terms form yet another geometric series. Write a program to find the Nth term in
the series.
The value N in a positive integer that should be read from STDIN. The Nth term that is calculated
by the program should be written to STDOUT. Other than value of n th term, no other character
/ string or message should be written to STDOUT. For example, if N=16, the 16th term in the
series is 2187, so only value 2187 should be printed to STDOUT.
You can assume that N will not exceed 30.
*/
#include <bits/stdc++.h>

using namespace std;

int findTerm(int num)
{
    vector<int> series(2, 1);
    int evenTerm = 2;
    int oddTerm = 3;

    for (int i = 2; i < num; i++)
    {
        if (i % 2 == 0)
        {
            series.push_back(evenTerm);
            evenTerm *= 2;
        }
        else
        {
            series.push_back(oddTerm);
            oddTerm *= 3;
        }
    }

    return series.back();
}

int main()
{
    int x;
    cin >> x;
    if (x >= 0)
    {
        cout << findTerm(x) << endl;
    }
    else
    {
        cout << "INVALID INPUT!" << endl;
    }
    return 0;
}