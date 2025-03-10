/* Q18: Sort Elements of an Array by Frequency

Sort Elements of an Array by Frequency

Problem Statement: Given an array of integers, having some duplicate elements, sort the array by frequency.

Examples:

Example 1:
Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
Output: 2 2 2 1 1 3 3 4
Explanation: Since  2 is present 3 times in an array , so print it 3 times ,then print ‘1’ 2 times and then ‘3’ 2 times and 4 has least frequency, it will be printed at last.

Example 2:
Input: N = 6, array[] = {-199,6,7,-199,3,5}
Output: -199 -199 3 5 6 7
Explanation: Since -199 is present 2 times so it will be printed at first , then 3 , 5 ,6 ,7 are present once in array , so print them in their sorted order.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sortByFrequency(vector<int> &nums)
{
    if (nums.empty())
    {
        return nums;
    }

    unordered_map<int, int> hash;

    for (int num : nums)
    {
        hash[num]++;
    }

    sort(nums.begin(), nums.end(), [&](int a, int b)
         { 
        if(hash[a] != hash[b]){
            return hash[a] > hash[b];
        }
        return a < b; });

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

    vector<int> res = sortByFrequency(nums);

    cout << "RESPONSE ==> ";
    for (int num : res)
    {
        cout << num << "  ";
    }
    return 0;
}