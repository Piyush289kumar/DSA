/* Q20: Check if array is subset of another array. */

#include <bits/stdc++.h>

using namespace std;

string isSubset(vector<int> &small, vector<int> &large)
{
    unordered_map<int, int> hash;
    for (auto n : large)
        hash[n]++;
    for (auto n : small)
    {
        if (!hash[n])
            return "NO";
        hash[n]--;
    }
    return "YES";
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> nums1(N);
    vector<int> nums2(M);

    for (int i = 0; i < N; i++)
        cin >> nums1[i];

    for (int i = 0; i < M; i++)
        cin >> nums2[i];

    cout << isSubset(nums1, nums2);

    return 0;
}