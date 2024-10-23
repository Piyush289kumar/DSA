/* Q4: Sort The Array
Difficulty: BasicAccuracy: 41.02%Submissions: 119K+Points: 1

Given a random array arr of numbers, please return them in ascending sorted order.

Examples:

Input: arr[] = [1, 5, 3, 2]
Output: [1, 2, 3, 5]
Explanation: After sorting array will be like [1, 2, 3, 5].

Input: arr[] = [3, 1]
Output: [1, 3]
Explanation: After sorting array will be like [1, 3].

Constraints:
1 ≤ arr.size, arr[i] ≤ 10^5
*/

#include <iostream>
#include <vector>

using namespace std;

void mergeArr(vector<int> &arr, int start, int end)
{

    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *temp1 = new int[len1];
    int *temp2 = new int[len2];

    int sorceIdx = start;

    for (int idx = 0; idx < len1; idx++)
    {
        temp1[idx] = arr[sorceIdx++];
    }

    sorceIdx = mid + 1;
    for (int idx = 0; idx < len2; idx++)
    {
        temp2[idx] = arr[sorceIdx++];
    }

    int idx1 = 0;
    int idx2 = 0;
    int mainIdx = start;

    while (idx1 < len1 && idx2 < len2)
    {
        if (temp1[idx1] < temp2[idx2])
        {
            arr[mainIdx++] = temp1[idx1++];
        }
        else
        {
            arr[mainIdx++] = temp2[idx2++];
        }
    }

    if (idx1 < len1)
    {
        while (idx1 < len1)
        {
            arr[mainIdx++] = temp1[idx1++];
        }
    }

    if (idx2 < len2)
    {
        while (idx2 < len2)
        {
            arr[mainIdx++] = temp2[idx2++];
        }
    }

    delete[] temp1;
    delete[] temp2;

    return;
}
void mergeSort(vector<int> &arr, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // Left Part
    mergeSort(arr, start, mid);

    // Right Part
    mergeSort(arr, mid + 1, end);

    // Merge Both Part
    mergeArr(arr, start, end);

    return;
}
void sortArr(vector<int> &arr)
{

    int n = arr.size();

    if (n <= 1)
    {
        return;
    }

    int start = 0;
    int end = n - 1;

    mergeSort(arr, start, end);
}

int main()
{
    vector<int> arr = {1, 5, 3, 2};

    sortArr(arr);

    cout << "RESPONSE ==> ";
    for(int num : arr){
        cout << num << " ";
    }

    return 1;
}