/* Q5: 1636. Sort Array by Increasing Frequency
Easy
Topics
Companies
Hint

Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.



Example 1:

Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

Example 2:

Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]
Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.

Example 3:

Input: nums = [-1,1,-6,4,5,-6,1,4,1]
Output: [5,-1,4,4,-6,-6,1,1,1]*/

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> frequencySort(vector<int> &nums)
{

    map<int, int> freq;

    for (int n : nums)
    {
        freq[n]++;
    }

    vector<pair<int, int>> freqVec(freq.begin(), freq.end());

    sort(freqVec.begin(), freqVec.end(), [&](pair<int, int> n1, pair<int, int> n2)
         { return (n1.second == n2.second ? n1.first > n2.first : n1.second < n2.second); });

    vector<int> res;

    for (auto &i : freqVec)
    {
        int freqCount = i.second;
        int val = i.first;

        for (int i = 0; i < freqCount; i++)
        {
            res.push_back(val);
        }
    }

    return res;
}

int main()
{
    vector<int> nums = {14, 32, 24, 27, 1, 32, -16, 29, 46, 40, 21, 9, -18, 29, 40, 7, -16, -43, 9, 19, 24, -32, 32, -35};
    vector<int> res = frequencySort(nums);

    cout << endl
         << endl;
    cout << "RESPONSE ==> ";
    for (int n : res)
    {
        cout << n << " ";
    }
    cout << endl
         << endl;

    return 0;
}