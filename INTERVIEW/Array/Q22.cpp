/* Q22: Non-Repeating Element
Difficulty: EasyAccuracy: 39.31%Submissions: 114K+Points: 2

Find the first non-repeating element in a given array arr of integers and if there is not present any non-repeating element then return 0

Note: The array consists of only positive and negative integers and not zero.

Examples:

Input: arr[] = [-1, 2, -1, 3, 2]
Output: 3
Explanation: -1 and 2 are repeating whereas 3 is the only number occuring once. Hence, the output is 3.

Input: arr[] = [1, 1, 1]
Output: 0
Explanation: There is not present any non-repeating element so answer should be 0.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int firstNonRepeating(vector<int> &arr)
{

    int n = arr.size();

    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }

    unordered_map<int, int> freq;
    for (int n : arr)
    {
        freq[n]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
        {
            return arr[i];
        }
    }

    return 1;
}

int main()
{
    vector<int> arr = {4, -8, 1, -4, -3, -8, -3, -10, 3, -3, 10};

    cout << "RESPONSE ==> " << firstNonRepeating(arr);

    return 0;
}
