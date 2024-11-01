/* Q33: Triplet Sum in Array
Difficulty: MediumAccuracy: 35.0%Submissions: 304K+Points: 4
Given an array arr of size n and an integer x. Find if there's a triplet in the array which sums up to the given integer x.
Examples
Input:n = 6, x = 13, arr[] = [1,4,45,6,10,8]
Output: 1
Explanation: The triplet {1, 4, 8} in the array sums up to 13.
Input: n = 6, x = 10, arr[] = [1,2,4,3,6,7]
Output: 1
Explanation: Triplets {1,3,6} & {1,2,7} in the array sum to 10.
Input: n = 6, x = 24, arr[] = [40,20,10,3,6,7]
Output: 0
Explanation: There is no triplet with sum 24. */

#include <iostream>
#include <algorithm>
using namespace std;

/* Algo
   1. Sort Array
   2. Fix one element and use two pointers
   3.  If sum is less than target, move left pointer
   4.  If sum is greater than target, move right pointer
   5.  If sum is equal to target, return 1
   6.  Repeat for all elements
   7.  If no triplet is found, return 0
*/

// ************* Coding Plateform *************

// 1. LeetCode
// sum == 0;
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    if (n <= 0)
    {
        return ans;
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++) // Room for 3 elements
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0)
            {
                ans.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1])
                {
                    left++;
                }
                while (right > left && nums[right] == nums[right - 1])
                {
                    right--;
                }
                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return ans;
}
// 2. Code Studio
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;
    if (n <= 0)
    {
        return ans;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++) // Room for 3 elements
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == K)
            {
                ans.push_back({arr[i], arr[left], arr[right]});
                while (left < right && arr[left] == arr[left + 1])
                {
                    left++;
                }
                while (right > left && arr[right] == arr[right - 1])
                {
                    right--;
                }
                left++;
                right--;
            }
            else if (sum < K)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return ans;
}
// 3. GeeksForGeeks
bool find3Numbers(int arr[], int n, int x)
{
    if (n <= 0)
    {
        return false;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == x)
            {
                return true;
            }
            else if (sum < x)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 13;
    cout << "RESPONS ==> " << find3Numbers(arr, n, x) << endl;
    return 0;
}