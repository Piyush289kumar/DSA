/* Q6: Rearrange array in increasing-decreasing order. */

#include<bits/stdc++.h>

using namespace std;

void rearrange(vector<int> &nums){
    int N = nums.size();
    sort(nums.begin(), nums.end());
    reverse(nums.begin()+N/2, nums.end());

    // output
    for(auto num : nums){
        cout << num << " ";
    }
}

int main(){
    int N; 
    cin >> N;

    vector<int> nums(N);
    for(int i=0; i<N; i++){
        cin >> nums[i];
    }

    rearrange(nums);

    return 0;
}