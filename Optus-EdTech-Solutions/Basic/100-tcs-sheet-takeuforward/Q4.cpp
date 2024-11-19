/* Q4: Reverse a given Array

Problem Statement: You are given an array. The task is to reverse the array and print it. 
Examples:
Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.
Example 2:
Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &nums){
    if(nums.empty()){
        return;
    }

    int start = 0;
    int end = nums.size() -1;

    while (start <= end)
    {
        swap(nums[start++], nums[end--]);
    }

    return;
    
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
    reverseArray(nums);
    cout << "RESPONSE == > " ;
    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}