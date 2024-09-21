/* Q18: Selection Sort Using Recursion. */

#include <iostream>
#include <vector>

using namespace std;

void helperFunction(vector<int> &arr, int start)
{
    if (start == arr.size())
        return;

    for (int idx = arr.size() - 1; idx > start; idx--)
    {
        if (arr[idx] < arr[idx - 1])
            swap(arr[idx], arr[idx - 1]);
    }

    helperFunction(arr, start + 1);
}

vector<int> selectionSort(vector<int> &arr)
{
    if (arr.size() == 0)
        return arr;
    if (arr.size() == 1)
        return arr;

    int start = 0;

    helperFunction(arr, start);
    return arr;
}

int main()
{
    vector<int> arr = {4, 2, 1, 3, 5};

    selectionSort(arr);

    cout << endl
         << endl
         << "Sorted Array ==> " << endl
         << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << endl
         << endl;
}