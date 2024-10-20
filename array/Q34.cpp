/* Q34:  Reverse The Array by Position
Easy
0/40
Average time to solve is 15m
2139 upvotes
Asked in companies
Problem statement

Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0
based indexing so the subarray {5, 6} will be reversed and our
output array will be {1, 2, 3, 4, 6, 5}.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:

1 <= T <= 10
0 <= M <= N <= 5*10^4
-10^9 <= ARR[i] <= 10^9

Time Limit: 1 sec
*/

#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int n = arr.size() - 1; // get the last index of the array
    if (n <= 1 || m <= 0)
    {
        return;
    }

    int start = m+1;
    int end = n;

    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }


    return;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int m = 3;

    reverseArray(arr, m);

    cout << endl
         << endl;
    cout << "RESPONSE ==> ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 1;
}