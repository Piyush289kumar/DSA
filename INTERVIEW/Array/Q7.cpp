/* Q7: Sort 0s, 1s and 2s
Difficulty: EasyAccuracy: 50.58%Submissions: 707K+Points: 2

Given an array arr containing only 0s, 1s, and 2s. Sort the array in ascending order.

Examples:

Input: arr[] = [0, 2, 1, 2, 0]
Output: [0, 0, 1, 2, 2]
Explanation: 0s 1s and 2s are segregated into ascending order.

Input: arr[] = [0, 1, 0]
Output: [0, 0, 1]
Explanation: 0s 1s and 2s are segregated into ascending order.

Input: arr[] = [2, 2, 2]
Output: [2, 2, 2]
Explanation: Only 2s are present here.

Constraints:
1 <= arr.size() <= 106
0 <= arr[i] <= 2
*/
#include <iostream>
#include <vector>
using namespace std;
void sort012(vector<int> &arr)
{
    int n = arr.size();
    if (n <= 1)
    {
        return;
    }
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 2)
        {
            swap(arr[high--], arr[mid]);
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
    }
    return;
}
int main()
{
    vector<int> arr = {0, 2, 1, 2, 0};

    sort012(arr);

    cout << "RESPONSE ==> ";
    for(int n : arr){
        cout << n << " ";
    }
    return 0;

}