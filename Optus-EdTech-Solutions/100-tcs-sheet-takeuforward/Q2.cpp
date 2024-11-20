/* Q2: Find the Largest element in an array

Problem Statement: Given an array, we have to find the largest element in the array.
Examples
Example 1:
Input:
 arr[] = {2,5,1,3,0};
Output:
 5
Explanation:
 5 is the largest element in the array. 
Example2:
Input:
 arr[] = {8,10,5,7,9};
Output:
 10
Explanation:
 10 is the largest element in the array. 
*/

#include<bits/stdc++.h>

using namespace std;

int findLargestElement(vector<int> &nums){
    if(nums.empty()){
        return -1;
    }

    int largestElement = INT_MIN;

    for(int num : nums){
        if(largestElement < num){
            largestElement = num;
        }
    }

    return largestElement;
}

int main(){
    int n;
    cout << "Enter Size : "; 
    cin >> n;

    vector<int> nums(n);

    for(int &num : nums){
        cin >> num;
    }

    cout << "RESPONSE ==> " << findLargestElement(nums);

    return 0;
}