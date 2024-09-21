/* Q17: Bubble Sort Using Recursion.*/

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &result)
{
    cout << endl
         << endl
         << "SORTED ARRAY ==> ";
    for (int idx = 0; idx < result.size(); idx++)
    {
        cout << result[idx] << " ";
    }
    cout << endl
         << endl
         << endl;
}

bool checkSortedOrNot(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

void swapElement(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    if (arr[start] > arr[start + 1])
        swap(arr[start], arr[start + 1]);

    return swapElement(arr, start + 1, end);
}

vector<int> helperArrRange(vector<int> &arr, int start, int end)
{
    if (end == 0 || checkSortedOrNot(arr))
    {
        return arr;
    }
    // Function Called
    swapElement(arr, start, end);

    print(arr);

    return helperArrRange(arr, start, end - 1); // Recursive Call
}

vector<int> bubbleSort(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    return helperArrRange(arr, start, end);
}

int main()
{
    vector<int> arr = {4, 2, 1, 3, 5};
    vector<int> result = bubbleSort(arr);

    cout << endl
         << endl
         << "SORTED ARRAY ==> ";
    for (int idx = 0; idx < result.size(); idx++)
    {
        cout << result[idx] << " ";
    }
    cout << endl
         << endl
         << endl;

    return 0;
}