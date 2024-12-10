/* Q4:Sort The Array
Difficulty: BasicAccuracy: 41.02%Submissions: 120K+Points: 1

Given a random array arr of numbers, please return them in ascending sorted order.
Note: Use Inbuilt functions to Sort the given array

Examples:

Input: arr[] = [1, 5, 3, 2]
Output: [1, 2, 3, 5]
Explanation: After sorting array will be like [1, 2, 3, 5].

Input: arr[] = [3, 1]
Output: [1, 3]
Explanation: After sorting array will be like [1, 3].

Input: arr[] = [1, 2, 3]
Output: [1, 2, 3]
Explanation: It's already in expected form.
*/

#include <bits/stdc++.h>

using namespace std;

void sortArr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortArr(arr);
    cout << "RESPONSE ==> ";

    for (int num : arr)
    {
        cout << num << " -> ";
    }

    return 0;
}