/* Q19: Sort Elements of an Array by Frequency. */
#include <bits/stdc++.h>
using namespace std;

void sortByFreq(vector<int> &nums)
{
    map<int, int> freq;

    for (int num : nums)
    {
        freq[num]++;
    }

    sort(nums.begin(), nums.end(), [&](int a, int b)
         {
        if(freq[a] != freq[b]){
            return freq[a] > freq[b];
        }else{
            return a < b;
        } });
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    sortByFreq(nums);

    for (auto num : nums)
    {
        cout << num << ", ";
    }
}