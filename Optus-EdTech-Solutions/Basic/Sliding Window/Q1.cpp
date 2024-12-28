/* Q1: Find Max Sum of Subarry using Sliding Window.*/

#include<bits/stdc++.h>

using namespace std;

int subArryMaxSum(vector<int>& nums, int k){

    int left = 0;
    int right = 0;
    
    int maxSum = 0;
    int currSum = 0;

    for(int i = 0; i < nums.size(); i++){        

        if(right < k){
            currSum += nums[right++];
        }else{
            currSum = currSum - nums[left++] + nums[right++];
        }

        maxSum = max(maxSum, currSum);
    }

    return maxSum;
    
}

int main(){

    vector<int> nums = {1,2,3,-1,2,3};
    int k = 3;

    cout << subArryMaxSum(nums, k);

    return 0;

}