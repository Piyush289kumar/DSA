/* Q24: Check if array is subset of another array. */

#include <bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> &nums1, vector<int> &nums2, int N, int M)
{

    unordered_set<int> elements(nums2.begin(), nums2.end());

    for (int num : nums1)
    {
        if (elements.find(num) == elements.end())
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> nums1(N);
    vector<int> nums2(M);

    for (int i = 0; i < N; i++)
    {
        cin >> nums1[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> nums2[i];
    }

    if (isSubset(nums1, nums2, N, M))
    {
        cout << "arr1[] is a subset of arr2[]";
    }
    else
    {
        cout << "arr1[] is not a subset of arr2[]";
    }

    return 0;
}