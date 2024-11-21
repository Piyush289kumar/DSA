/* Q13: Find all repeating elements in an array.

Problem Statement: Find all the repeating elements present in an array.

Examples:

Example 1:
Input:
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once.

Example 2:
Input:
 Arr[] = [1,1,0]
Output:
 1
Explanation:
 Only 1 is occurring more than once in the given array.

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
        if(entry.second >= 2){
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