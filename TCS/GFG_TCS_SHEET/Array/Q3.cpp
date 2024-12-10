/* Q3:Equal Sum
Difficulty: MediumAccuracy: 37.32%Submissions: 31K+Points: 4

Given an array arr. Determine if there exists an element in the array such that the sum of the elements on its left is equal to the sum of the elements on its right. If there are no elements to the left/right, then the sum is considered to be zero. 

Example:

Input: arr[] = [1, 2, 3, 3]
Output: true
Explanation: Consider 1-based indexing i = 3, for [1, 2] sum is 3 and for [3] sum is also 3.

Input: arr[] = [1, 5]
Output: false
Explanation: No such index present.
*/

#include <bits/stdc++.h>

using namespace std;

 string equilibrium(vector<int> &arr) {

    int total_sum = 0;
    for(int num : arr){
        total_sum += num;        
    }

    int curr_sum = 0;
    for(int num : arr){
        curr_sum += num;

        if( (curr_sum * 2) - num == total_sum ){
            return "true";
        }
    }

    return "false";
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

    string res = equilibrium(arr);
    cout << "RESPONSE ==> " << res;

    return 0;
}