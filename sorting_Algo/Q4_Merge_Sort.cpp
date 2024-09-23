/* Q4: Merge Sort.

Time Complexity ==> O(n log n)
Space Complexity ==> O(n)
*/

#include <iostream>
#include <vector>

using namespace std;

void mergeArr(vector<int> &arr, int start, int end)
{

    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *firstTempArray = new int[len1];
    int *secondTempArray = new int[len2];

    // Copy Element in Temp Arrays
    int mainArrayIdex = start;
    for (int idx = 0; idx < len1; idx++)
    {
        firstTempArray[idx] = arr[mainArrayIdex++];
    }
    mainArrayIdex = mid + 1;
    for (int idx = 0; idx < len2; idx++)
    {
        secondTempArray[idx] = arr[mainArrayIdex++];
    }

    // Merge Array
    int index1 = 0;
    int index2 = 0;
    int mainIndex = start;

    while (index1 < len1 && index2 < len2)
    {

        if (firstTempArray[index1] < secondTempArray[index2])
        {
            arr[mainIndex++] = firstTempArray[index1++];
        }
        else
        {
            arr[mainIndex++] = secondTempArray[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndex++] = firstTempArray[index1++];
    }
    while (index2 < len2)
    {
        arr[mainIndex++] = secondTempArray[index2++];
    }

    delete []firstTempArray;
    delete []secondTempArray;
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // Left Part
    mergeSort(arr, start, mid);

    // Right Part
    mergeSort(arr, mid + 1, end);

    // Merge Two Array

    mergeArr(arr, start, end);
}

int main()
{

    vector<int> arr = {4, 5, 2, 1, 6, 3, 8, 9, 7};
    int start = 0;
    int end = arr.size() - 1;

    mergeSort(arr, start, end);

    cout << endl
         << endl
         << "Sorted Array ==> ";
    for (int idx = 0; idx < arr.size(); idx++)
    {
        cout << arr[idx] << " ";
    }
    cout << endl
         << endl;

    return 0;
}