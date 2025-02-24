/* Q11: TCS NQT Coding Question – 11
Problem Statement – Given an array of integers where every element appears even number of times
except one element which appears odd number of times, write a program to find that odd occurring
element in O(log n) time. The equal elements must appear in pairs in the array but there cannot be more
than two consecutive occurrences of an element.
For example: 3  2 3 2  It doesn't have equal elements appear in pairs
7  1 1 2 2 2 3 3  It contains three consecutive instances of an element.
5  2 2 3 1 1  It is valid and the odd occurring element present in it is 3.
Enter only valid inputs.
Sample Input : 5  2 2 3 1 1
Sample Output : 3

*/

#include <bits/stdc++.h>
using namespace std;

int findOddElement(vector<int> &nums)
{
    int oddEl = 0;
    for (auto num : nums)
    {
        oddEl ^= num;
    }
    return oddEl;
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

    cout << findOddElement(nums) << endl;

    return 0;
}