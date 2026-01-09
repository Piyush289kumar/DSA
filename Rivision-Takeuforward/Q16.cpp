/* Q16: Sorting elements of an array by frequency. */

#include <bits/stdc++.h>

using namespace std;

void freqSort(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return;

    unordered_map<int, int> hash;
    for (auto n : nums)
        hash[n]++;

    sort(nums.begin(), nums.end(), [&](int a, int b)
         {
        if(hash[a] != hash[b]){
            return hash[a] > hash[b];
        }else{
            return a < b;
        } });

    // output
    for (auto num : nums)
        cout << num << " - ";
}

int main()
{
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];

    freqSort(nums);

    return 0;
}