/* Sorting Algo. */

// 1. Merge Sort

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Copy Array To Temp Arrays
    int *firstArr = new int[len1];
    int *secondArr = new int[len2];

    int mainArry = start;

    for (int i = 0; i < len1; i++)
    {
        firstArr[i] = arr[mainArry++];
    }

    mainArry = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        secondArr[i] = arr[mainArry++];
    }

    // Mergo To Array
    int firstIdx = 0;
    int secondIdx = 0;
    int mainArryIdx = start;

    while (firstIdx < len1 && secondIdx < len2)
    {
        if (firstArr[firstIdx] < secondArr[secondIdx])
        {
            arr[mainArryIdx++] = firstArr[firstIdx++];
        }
        else
        {
            arr[mainArryIdx++] = secondArr[secondIdx++];
        }
    }

    while (firstIdx < len1)
    {
        arr[mainArryIdx++] = firstArr[firstIdx++];
    }
    while (secondIdx < len2)
    {
        arr[mainArryIdx++] = secondArr[secondIdx++];
    }

    delete[] firstArr;
    delete[] secondArr;
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

    // Merge To Array
    merge(arr, start, end);
}

int main()
{

    vector<int> arr = {-9, 0, 4, 6, 8, 2, 3, 1};
    int start = 0;
    int end = arr.size() - 1;

    mergeSort(arr, start, end);

    cout << endl
         << endl
         << "Sorted Array ===> ";
    for (int idx = 0; idx <= end; idx++)
    {
        cout << arr[idx] << " ";
    }
    return 0;
}
