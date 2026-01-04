/* Q3: Find the second largest & second smallest element in an array.  */

#include <bits/stdc++.h>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    if (n < 2)
        return {-1, -1};

    int firstMin = INT_MAX, secMin = INT_MAX;
    int firstMax = INT_MIN, secMax = INT_MIN;

    for (int num : a)
    {
        if (firstMin > num)
        {
            secMin = firstMin;
            firstMin = num;
        }
        else if (secMin > num && firstMin < num)
        {
            secMin = num;
        }

        if (firstMax < num)
        {
            secMax = firstMax;
            firstMax = num;
        }
        else if (secMax < num && firstMax > num)
        {
            secMax = num;
        }
    }

    return {secMin, secMax};
}
int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = getSecondOrderElements(N, nums);
    cout << "sec. smallest => " << ans[0] << endl;
    cout << "sec. largest => " << ans[1] << endl;
}