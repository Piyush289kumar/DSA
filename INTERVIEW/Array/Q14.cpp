/* Q14.1: Kth Smallest
Difficulty: MediumAccuracy: 35.17%Submissions: 650K+Points: 4

Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array.

Follow up: Don't solve it using the inbuilt sort function.

Examples :

Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output:  7
Explanation: 3rd smallest element in the given array is 7.

Input: arr[] = [2, 3, 1, 20, 15], k = 4
Output: 15
Explanation: 4th smallest element in the given array is 15.

Expected Time Complexity: O(n+(max_element) )
Expected Auxiliary Space: O(max_element)
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int kthSmallest(vector<int> &arr, int k)
{
    int n = arr.size();

    priority_queue<int> maxHeap;

    for (int i = 0; i < k; i++)
    {
        maxHeap.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (arr[i] < maxHeap.top())
        {
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }

    return maxHeap.top();
}

int main()
{

    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;

    cout << "RESONSE ==> " << kthSmallest(arr, k);

    return 0;
}