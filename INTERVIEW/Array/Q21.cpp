/* Q21: Common in 3 Sorted Arrays
Difficulty: EasyAccuracy: 22.16%Submissions: 400K+Points: 2

You are given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
If there are no such elements return an empty array. In this case, the output will be -1.

Note: can you handle the duplicates without using any additional Data Structure?

Examples :

Input: arr1 = [1, 5, 10, 20, 40, 80] , arr2 = [6, 7, 20, 80, 100] , arr3 = [3, 4, 15, 20, 30, 70, 80, 120]
Output: [20, 80]
Explanation: 20 and 80 are the only common elements in arr, brr and crr.

Input: arr1 = [1, 2, 3, 4, 5] , arr2 = [6, 7] , arr3 = [8,9,10]
Output: [-1]
Explanation: There are no common elements in arr, brr and crr.

Input: arr1 = [1, 1, 1, 2, 2, 2], B = [1, 1, 2, 2, 2], arr3 = [1, 1, 1, 1, 2, 2, 2, 2]
Output: [1, 2]
Explanation: We do not need to consider duplicates

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    unordered_map<int, int> freq1;
    unordered_map<int, int> freq2;
    unordered_map<int, int> freq3;

    vector<int> ans;

    for (int n : arr1)
    {
        freq1[n]++;
    }
    for (int n : arr2)
    {
        freq2[n]++;
    }
    for (int n : arr3)
    {
        freq3[n]++;
    }

    for (int num : arr1)
    {
        if (freq1[num] && freq2[num] && freq3[num])
        {
            ans.push_back(num);
            freq1[num] = 0; // Prevent From Duplicated data, We dont need duplicated data
        }
    }

    if (ans.empty())
    {
        return {-1};
    }

    return ans;
}

int main()
{

    vector<int> arr1 = {1, 1, 5, 10, 20, 40, 80}, arr2 = {1, 6, 7, 20, 80, 100}, arr3 = {1, 3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> res = commonElements(arr1, arr2, arr3);

    cout << "RESPONSE ==> ";
    for (int n : res)
    {
        cout << n << " ";
    }
    return 0;
}