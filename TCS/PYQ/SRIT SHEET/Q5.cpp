/* Q5: Problem Statement – Given an integer array Arr of size N the task is to find the count of elements whose
value is greater than all of its prior elements. Note : 1st element of the array should be considered in the
count of the result.
For example, Arr[]={7,4,8,2,9}
As 7 is the first element, it will consider in the result. 8 and 9 are also the elements that are greater than all
of its previous elements. Since total of 3 elements is present in the array that meets the condition.
Hence the output = 3.
*/
#include <bits/stdc++.h>
using namespace std;

int countOfPriorElements(vector<int> &nums)
{
    int cnt = 0;
    int maxi = INT_MIN;

    for (int &n : nums)
    {
        if (maxi < n)
        {
            maxi = n;
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    cout << countOfPriorElements(nums) << endl;

    return 0;
}