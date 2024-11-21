/* Q14: Find all the non-repeating elements in an array

Problem Statement: Find all the non-repeating elements for a given array. Outputs can be in any order.

Examples:

Example 1:
Input:
 Nums = [1,2,-1,1,3,1]
Output:
 2,-1,3
Explanation:
 1 is the only element in the given array which occurs thrice in the array. -1,2,3 occurs only once and hence, these are non-repeating elements of the given array.

Example 2:
Input:
 Nums = [1,2,3]
Output:
 1,2,3
Explanation:
 All elements present in the array occur once. Hence, every element is non-repeating.

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> findAllRepeating(vector<int> &nums)
{
    if(nums.empty()){
        return nums;
    }

    unordered_map<int,int> hash;

    for(int num : nums){
        hash[num]++;
    }

    vector<int> nonRepeatingElements;

    for(auto entry : hash){
        if(entry.second == 1){
            nonRepeatingElements.push_back(entry.first);
        }
    }

    return nonRepeatingElements;
}
int main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vector<int> nums(n);
    for (int &num : nums)
    {
        cin >> num;
    }

    vector<int> res = findAllRepeating(nums);

    cout << "RESPONSE ==> ";
    for (int num : res)
    {
        cout << num << "  ";
    }
    return 0;
}