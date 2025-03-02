/* Q37: Array is Even or Odd. */

#include <bits/stdc++.h>
using namespace std;

string isEvenOddMixed(vector<int> &nums)
{
    int evenCnt = 0, oddCnt = 0;

    for (auto num : nums)
    {
        (num % 2 == 0) ? evenCnt++ : oddCnt++;
    }

    if (evenCnt == 0)
    {
        return "Odd";
    }
    else if (oddCnt == 0)
    {
        return "Even";
    }
    else
    {
        return "Mixed";
    }
}

int main()
{
    vector<int> nums = {8, 4, 2};
    cout << isEvenOddMixed(nums) << endl;
    return 0;
}