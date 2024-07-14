// Q9. Find Subarray with given Sum from Array of non-negative Numbers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int myArr[] = {1,4};
    int length = sizeof(myArr) / sizeof(myArr[0]);
    int givenSum = 7;
    int calSum = 0;
    int leftIdx = 0;
    for (int idx = leftIdx; idx < length; idx++)
    {
        if (leftIdx == 0 && idx == length - 1)
        {
            cout << endl
                 << "Sub Array is not Found : -1";
            return 0;
        }
        if (calSum == givenSum)
        {
            cout << endl
                 << "Sub Array Found. Index of subarray = " << ++leftIdx << " - " << idx << endl;
            return 0;
        }
        if (myArr[idx] < 0)
        {
            continue;
        }
        if (calSum > givenSum)
        {
            calSum -= myArr[leftIdx];
            leftIdx++;
            idx--;
            cout << "Enter: " <<  endl;
        }
        else
        {
            calSum += myArr[idx];
        }
    }
    return 0;
}