/* Q2: Reverse an Array
Difficulty: EasyAccuracy: 55.32%Submissions: 29K+Points: 2

You are given an array of integers arr . Your task is to reverse the given array and return the reversed array.

Examples:

Input: arr = [1, 2, 3, 4]
Output: [4, 3, 2, 1]
Explanation: The elements of the array are 1 2 3 4. After reversing the array, the first element goes to the last position,
the second element goes to the second last position and so on. Hence, the answer is 4 3 2 1.

Input: arr = [1]
Output: [1]
Explanation: The array has only single element, hence the reversed array is same as the original.

Expected Time Complexity: O(n)
Expected Space Complexity: O(1)*/

#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 1)
    {
        return;
    }

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }

    return;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4};

    reverseArray(arr);

    cout << "RESPONE ==> ";

    for (auto num : arr)
    {
        cout << num << " ";
    }

    return 1;
}