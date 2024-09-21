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

vector<int> helperArrRange(vector<int> &arr, int end)
{
    if (end == 0)
        return arr;

    // Swap Order
    for (int i = 0; i < end - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    return helperArrRange(arr, end - 1); // Recursive Call
}

vector<int> bubbleSort(vector<int> &arr)
{
    int end = arr.size() - 1;
    return helperArrRange(arr, end);
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