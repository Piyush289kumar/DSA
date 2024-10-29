/* Q27: Maximum Product Subarray
Difficulty: MediumAccuracy: 18.09%Submissions: 381K+Points: 4

Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr.

Note: It is guaranteed that the output fits in a 64-bit integer.

Examples

Input: arr[] = [6, -3, -10, 0, 2]
Output: 180
Explanation:  The subarray [6, -3, -10] gives max product as 180.

Input: arr[] = [2, 3, 4, 5, -1, 0]
Output: 120
Explanation: The subarray [2, 3, 4, 5] gives max product as 120.

Input: arr[] = [2, 3, 4]
Output: 24
Explanation: For an array with all positive elements, the result is product of all elements.
*/

#include <iostream>
#include <vector>

using namespace std;

int maxProduct(vector<int> &arr)
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

    int maxPro = arr[0];
    int minPro = arr[0];

    int maxProduct = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] < 0)
        {
            swap(maxPro, minPro);
        }

        maxPro = max(arr[i], maxPro * arr[i]);
        minPro = min(arr[i], minPro * arr[i]);

        maxProduct = max(maxProduct, maxPro);
    }

    return maxProduct;
}

int main()
{
    vector<int> arr = {6, -3, -10, 0, 2};

    cout << "RESPONSE ==> " << maxProduct(arr);

    return 0;
}