/* Q14: Kth Smallest and Largest Element of Array
Easy
0/40
Average time to solve is 15m
Contributed by
266 upvotes
Asked in companies
Problem statement

You are given an array ‘Arr’ consisting of ‘N’ distinct integers and a positive integer ‘K’. Find out Kth smallest and Kth largest element of the array. It is guaranteed that K is not greater than the size of the array.

Example:

Let ‘N’ = 4,  ‘Arr’ be [1, 2, 5, 4] and ‘K’ = 3.
then the elements of this array in ascending order is [1, 2, 4, 5].  Clearly, the 3rd smallest and largest element of this array is 4 and 2 respectively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:

1 <= T <= 50
1 <= N <= 10^4
1 <= K <= N
-10^9 <= Arr[i] <= 10^9

Where ‘T’ is the total number of test cases, ‘N’ is the size of array ‘Arr’ and Arr[i] is the element of the given array.

Time limit: 1 sec

Sample Input 1:

2
4 4
5 6 7 2
4 3
1 2 5 4

Sample Output 1:

7 2
4 2

Explanation of Sample Input 1:

Test case 1:
Here, ‘N’ = 4, ‘Arr’ = [5, 6, 7, 2] and ‘K’ = 3.
Elements of the array in ascending order are [2, 5, 6, 7]
Thus the 4rd smallest and 4rd largest elements of this array are 7 and 2 respectively.

Test case 2:
See problem statement for an explanation.

Sample Input 2:

 2
 1 1
 2
 5 1
 5 4 3 2 1

Sample Output 2:

 2 2
 1 5


*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthSmallestElement(vector<int> arr, int n, int k)
{
    priority_queue<int> maxHeap;
    for (int idx = 0; idx < k; idx++)
    {
        maxHeap.push(arr[idx]);
    }
    for (int idx = k; idx < n; idx++)
    {
        if (arr[idx] < maxHeap.top())
        {
            maxHeap.pop();
            maxHeap.push(arr[idx]);
        }
    }
    return maxHeap.top();
}
int findKthLargestElement(vector<int> arr, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int idx = 0; idx < k; idx++)
    {
        minHeap.push(arr[idx]);
    }
    for (int idx = k; idx < n; idx++)
    {
        if (arr[idx] > minHeap.top())
        {
            minHeap.pop();
            minHeap.push(arr[idx]);
        }
    }
    return minHeap.top();
}
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    int kthSmallElement = findKthSmallestElement(arr, n, k);
    int kthLargestElement = findKthLargestElement(arr, n, k);

    vector<int> res(2);
    res[0] = kthSmallElement;
    res[1] = kthLargestElement;

    return res;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int n = arr.size();
    int k = 3;
    vector<int> res = kthSmallLarge(arr, n, k);
    cout << "== RSEPONSE == " << endl
         << "Smallest : " << res[0] << endl
         << "Largets : " << res[1];
    return 0;
}