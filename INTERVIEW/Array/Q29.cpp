/* Q29: Minimum in a Sorted and Rotated
Difficulty: EasyAccuracy: 40.57%Submissions: 109K+Points: 2

A sorted(in ascending order) array arr[ ] with distinct elements is rotated at some unknown point, the task is to find the minimum element in it.

Examples:

Input: arr[] = [4 ,5 ,1 ,2 ,3]
Output: 1
Explanation: 1 is the minimum element in the array.

Input: arr[] = [50, 40, 30, 20, 10, 5]
Output: 5
Explanation: Here 5 is the minimum element.

Input: arr[] = [4]
Output: 4
Explanation: Here 4 is the only minimum element.*/

#include <iostream>
#include <vector>

using namespace std;

int helper(vector<int> &arr, int low, int high)
{
    if (low == high)
    {
        return arr[low];
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] > arr[high])
    {
        return helper(arr, mid + 1, high);
    }
    else
    {
        return helper(arr, low, mid);
    }
}
int findMin(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;
    return helper(arr, low, high);
}
int main()
{
    vector<int> arr = {50, 40, 30, 20, 10, 5};

    cout << "RESPONSE ==> " << findMin(arr) << endl;

    return 0;
}