// Maximum Sum Subarray of Size K
#include<bits/stdc++.h>
using namespace std;

int maximumSumSubarrayOfSizeK(vector<int>& nums, int N, int K){
    int maxSum = 0;
    int currSum = 0;

    int l = 0, r = 0;

    while(r < N){

        if(l+r >= K){
            currSum -= nums[l];
            l++;
        }

        currSum += nums[r];
        maxSum = max(maxSum, currSum);

        r++;

    }

    return maxSum;
}

int main(){
    int N, K;
    cin >> N >> K;

    vector<int> nums(N);

    for(int i=0; i<N; i++) cin >> nums[i];

    cout << maximumSumSubarrayOfSizeK(nums, N, K) << endl;

    return 0;
}