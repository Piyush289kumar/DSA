/* Q5: Quick Sort. */

#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int pivotElement = arr[start];

    int countElementWhoLessThenPivot = 0;

    // Counting
    for (int idx = start; idx <= end; idx++)
    {
        if (arr[idx] < pivotElement)
        {
            countElementWhoLessThenPivot++;
        }
    }

    int pivotIdx = start + countElementWhoLessThenPivot;

    swap(arr[start], arr[pivotIdx]);

    // Swaping for Condition ==> -a | a | a+

    int i = start;
    int j = end;

    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] < arr[pivotIdx])
        {
            i++;
        }
        while (arr[j] > arr[pivotIdx])
        {
            j--;
        }

        if (i < pivotIdx && j > pivotIdx)
        {
            swap(arr[i++], arr[j++]);
        }
    }

    return pivotIdx;
}

void quickSort(vector<int> &arr, int start, int end)
{

    if (start >= end)
        return;

    int p = partition(arr, start, end);

    // Left Part
    quickSort(arr, start, p - 1);

    // Right Part
    quickSort(arr, p + 1, end);
}

int main()
{

    vector<int> arr = {4, 2, 3, 5, 6, 7, 1};
    int start = 0;
    int end = arr.size() - 1;

    quickSort(arr, start, end);

    cout << endl
         << endl
         << "Sorted Array ==> ";
    for (int idx = 0; idx < arr.size(); idx++)
    {
        cout << arr[idx] << " ";
    }

    return 0;
}