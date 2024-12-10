/* Q5: Equal Sum
Array Subset
Difficulty: BasicAccuracy: 44.05%Submissions: 386K+Points: 1

Given two arrays: a[] and b[], where both arrays may contain duplicate elements. The task is to determine whether array b is a subset of array a. It's important to note that both arrays can be unsorted. Additionally, each occurrence of a duplicate element within an array is considered as a separate element of the set.

Examples:

Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
Output: Yes
Explanation: b[] is a subset of a[]

Input: a[] = [1, 2, 3, 4, 4, 5, 6], b[] = [1, 2, 4]
Output: Yes
Explanation: b[] is a subset of a[]

Input: a[] = [10, 5, 2, 23, 19], b[] = [19, 5, 3]
Output: No
Explanation: b[] is not a subset of a[]
*/

#include <bits/stdc++.h>

using namespace std;

bool isSubset(vector<int> &a, vector<int> &b)
{

    unordered_set<int> setE(a.begin(), a.end());

    for(int num : b){
        if(setE.find(num) == setE.end()){
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cout << "Enter A Size : ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "Enter B Size : ";
    cin >> m;

    vector<int> arrb(m);

    for (int i = 0; i < m; i++)
    {
        cin >> arrb[i];
    }

    bool res = isSubset(arr, arrb);
    cout << "RESPONSE ==> " << (res ? "TURE" : "FALSE");

    return 0;
}