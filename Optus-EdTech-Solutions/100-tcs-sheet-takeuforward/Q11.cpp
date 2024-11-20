/* Q11: Remove Duplicates in-place from Sorted Array

Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.

Example 1:

Input:
 arr[1,1,2,2,2,3,3]
Output:
 arr[1,2,3,_,_,_,_]
Explanation:
 Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.
Example 2:
Input:
 arr[1,1,1,2,2,3,3,3,3,4,4]
Output:
 arr[1,2,3,4,_,_,_,_,_,_,_]
Explanation:
 Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int k = 1;
    for(int idx = 1; idx < nums.size(); idx++){
        if(nums[idx] != nums[idx - 1]){
            nums[k] = nums[idx];
            k++;
        }
    }
    nums.resize(k);
    return nums;
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
    vector<int> res = removeDuplicate(nums);
    cout << "RESPONSE ";
    for (int num : res)
    {
        cout << num << " ";
    }
    return 0;
}