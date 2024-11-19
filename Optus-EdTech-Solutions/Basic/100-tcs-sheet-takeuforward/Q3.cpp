/* Q3: Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.
Examples
Example 1:
Input:
 [1,2,4,7,7,5]
Output:
 Second Smallest : 2
    Second Largest : 5
Explanation:
 The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2
Example 2:
Input:
 [1]
Output:
 Second Smallest : -1
    Second Largest : -1
Explanation:
 Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
*/

#include <bits/stdc++.h>
using namespace std;
int findSecondSmallest(int n, vector<int> nums)
{
    if (n < 2)
    {
        return -1;
    }
    int firstSmallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for (int num : nums)
    {
        if (firstSmallest > num)
        {
            secondSmallest = firstSmallest;
            firstSmallest = num;
        }
        else if (num > firstSmallest && secondSmallest > num)
        {
            secondSmallest = num;
        }
    }
    return (secondSmallest == INT_MAX) ? -1 : secondSmallest;
}
int findSecondLargest(int n, vector<int> nums)
{
    if (n < 2)
    {
        return -1;
    }
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int num : nums)
    {
        if (firstLargest < num)
        {
            secondLargest = firstLargest;
            firstLargest = num;
        }
        else if (num < firstLargest && secondLargest < num)
        {
            secondLargest = num;
        }
    }
    return (secondLargest == INT_MAX) ? -1 : secondLargest;
}
vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int secondSmallest = findSecondSmallest(n, a);
    int secondLargest = findSecondLargest(n, a);
    return {secondSmallest, secondLargest};
}
int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vector<int> nums(n);
    for (int &num : nums)
    {
        cin >> num;
    }
    vector<int> res = getSecondOrderElements(n, nums);
    cout << "Second Smallest : " << res[0] << " - " << "Second Largest : " << res[1];
    return 0;
}