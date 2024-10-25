/* Q11: Wave Array
Difficulty: EasyAccuracy: 63.69%Submissions: 256K+Points: 2

Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place). In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....
If there are multiple solutions, find the lexicographically smallest one.

Note: The given array is sorted in ascending order, and you don't need to return anything to change the original array.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [2, 1, 4, 3, 5]
Explanation: Array elements after sorting it in the waveform are 2, 1, 4, 3, 5.

Input: arr[] = [2, 4, 7, 8, 9, 10]
Output: [4, 2, 8, 7, 10, 9]
Explanation: Array elements after sorting it in the waveform are 4, 2, 8, 7, 10, 9.

Input: arr[] = [1]
Output: [1]
*/

#include <iostream>
#include <vector>

using namespace std;

void convertToWave(vector<int> &arr)
{

    int n = arr.size();

    if (n <= 1)
    {
        return;
    }

    int i = 1;

    while (i < n)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        else if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }

        i += 2;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    convertToWave(arr);

    cout << "RESPONSE ==> ";
    for (int n : arr)
    {
        cout << n << " ";
    }

    return 1;
}