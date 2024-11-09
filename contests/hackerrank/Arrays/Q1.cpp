/* Q1:Find the Median

Example
arr = [15,3,1,2,4]
The sorted array The middle element and the median is 3.
*/

#include <bits/stdc++.h>

using namespace std;

int findMedian(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() / 2];
}

int main()
{
    vector<int> arr = {15, 3, 1, 2, 4};

    int median = findMedian(arr);

    cout << "RESPONSE ==> " << median << endl;

    return 0;
}