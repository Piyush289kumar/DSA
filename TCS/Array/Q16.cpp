/* Q16: Longest sub array with given sum.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> longestSubArray(vector<int> &nums, int k)
{
    int window_sum = 
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 1, 4};
    int k = 6;

    vector<int> res;

    res = longestSubArray(nums, k);

    cout << "RESPONSE ==> ";

    for (int i : res)
    {
        cout << i << " ";
    }

    return 0;
}