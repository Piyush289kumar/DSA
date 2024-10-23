/* Q3: Rotate Array by One
Difficulty: BasicAccuracy: 69.6%Submissions: 282K+Points: 1

Given an array arr, rotate the array by one position in clock-wise direction.

Examples:

Input: arr = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.

Input: arr = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)*/

#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &arr)
{

    int n = arr.size();

    if (n <= 1)
    {
        return;
    }

    int lastEl = arr[n - 1];

    for (int idx = n - 1; idx > 0; idx--)
    {
        arr[idx] = arr[idx - 1];
    }

    arr[0] = lastEl;

    return;
}


int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    rotate(arr);

    cout << "RESPONSE ==> ";
    for(int num : arr){
        cout << num << " ";
    }

    return 1;
}