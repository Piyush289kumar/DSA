/* Q24: Alternate positive and negative numbers
Difficulty: EasyAccuracy: 33.86%Submissions: 208K+Points: 2

Given an unsorted array arr containing both positive and negative numbers. Your task is to rearrange the array and convert it into an array of alternate positive and negative numbers without changing the relative order.

Note:
- Resulting array should start with a positive integer (0 will also be considered as a positive integer).
- If any of the positive or negative integers are exhausted, then add the remaining integers in the answer as it is by maintaining the relative order.
- The array may or may not have equal number of positive and negative integers.

Examples:

Input: arr[] = [9, 4, -2, -1, 5, 0, -5, -3, 2]
Output: 9 -2 4 -1 5 -5 0 -3 2
Explanation: The positive numbers are [9, 4, 5, 0, 2] and the negative integers are [-2, -1, -5, -3]. Since, we need to start with the positive integer first
and then negative integer and so on (by maintaining the relative order as well), hence we will take 9 from the positive set of elements and then
-2 after that 4 and then -1 and so on.
Hence, the output is 9, -2, 4, -1, 5, -5, 0, -3, 2.

Input: arr[] = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]
Output: 5 -5 2 -2 4 -8 7 1 8 0
Explanation : The positive numbers are [5, 2, 4, 7, 1, 8, 0] and the negative integers are [-5,-2,-8]. According to the given conditions we will start
from the positive integer 5 and then -5 and so on. After reaching -8 there are no negative elements left, so according to the given rule, we will
add the remaining elements (in this case positive elements are remaining) as it in by maintaining the relative order.
Hence, the output is 5, -5, 2, -2, 4, -8, 7, 1, 8, 0.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)*/

#include <iostream>
#include <vector>

using namespace std;
void rearrange(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return;
    }

    vector<int> pos, neg;

    for (int n : arr)
    {
        if (n >= 0)
        {
            pos.push_back(n);
        }
        else
        {
            neg.push_back(n);
        }
    }

    int i = 0, p = 0, n = 0;

    while (p < pos.size() && n < neg.size())
    {
        arr[i++] = pos[p++];
        arr[i++] = neg[n++];
    }

    while (p < pos.size())
    {
        arr[i++] = pos[p++];
    }

    while (n < neg.size())
    {
        arr[i++] = neg[n++];
    }

    return;
}

int main()
{
    vector<int> arr = {-5, -2, 5, 2, 4};
    rearrange(arr);

    cout << "RESPONSE ==> ";
    for (int n : arr)
    {
        cout << n << " ";
    };

    return 0;
}