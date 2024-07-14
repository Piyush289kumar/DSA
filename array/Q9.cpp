// Q9. Find Subarray with given Sum from Array of non-negative Numbers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int myArr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int length = sizeof(myArr) / sizeof(myArr[0]);
    int givenSum = 23;
    int calSum = 0;
    int leftIdx = 0;
    for (int idx = leftIdx; idx < length; idx++)
    {
        if (calSum == givenSum)
        {
            cout << endl
                 << "Sub Array Found. Index of subarray = " << leftIdx << " - " << idx << endl;
            return 0;
        }
        if (calSum > givenSum)
        {
            calSum -= myArr[leftIdx];
            leftIdx++;
            idx--;
        }
        else
        {
            calSum += myArr[idx];
        }
    }
    cout << endl
         << "Sum Cal : " << calSum << endl;
    return 0;
}