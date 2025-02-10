/* Q5: Count frequency of each element in an array. */

#include <bits/stdc++.h>

using namespace std;

void freqOfElement(vector<int> nums)
{

    unordered_map<int, int> hash;

    for (auto num : nums)
    {
        hash[num]++;
    }

    cout << "FREQ: " << endl;

    for (auto e : hash)
    {
        cout << e.first << " - " << e.second << endl;
    }
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

    freqOfElement(nums);
    
    return 0;
}