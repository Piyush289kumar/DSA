/*Q13: Array Is Sorted Or Not. (Recursion)

Example ==> 1. [1,2,3,4,5] True
            2. [1,2,6,4,5] False
*/

#include <iostream>

using namespace std;

bool isSorted(int arr[], int start, int size)
{
    if (start == size - 1)
        return true;

    return arr[start] <= arr[start + 1] ? isSorted(arr, start + 1, size) : false;
}

int main()
{
    int arr[5] = {1, 2, 3, 6, 5};
    int start = 0;
    int size = 5;
    cout << "RESPONSE ==> " << (isSorted(arr, start, size) ? "True" : "False");

    return 0;
}