/* Q5: Array Duplicates
Difficulty: EasyAccuracy: 18.95%Submissions: 769K+Points: 2

Given an array arr of integers, find all the elements that occur more than once in the array. Return the result in ascending order. If no element repeats, return an empty list.

Examples:

Input: arr[] = [2, 3, 1, 2, 3]
Output: [2, 3]
Explanation: 2 and 3 occur more than once in the given array.

Input: arr[] = [0, 3, 1, 2]
Output: []
Explanation: There is no repeating element in the array, so the output is empty.

Input: arr[] = [2]
Output: []
Explanation: There is single element in the array. Therefore output is empty.*/

#include <iostream>
#include <vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<int> findDuplicates(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    if (n <= 1)
    {
        return ans;
    }
    unordered_map<int, int> freq;
    for (int idx = 0; idx < n; idx++)
    {
        freq[arr[idx]]++;
    }
    for (auto num : freq)
    {
        if (num.second > 1)
        {
            ans.push_back(num.first);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}


int main(){
    vector<int> arr = {2, 3, 1, 2, 3};
    vector<int> result = findDuplicates(arr);


    cout << "RESPONE ==> ";

    for(int num : result){
        cout << num << " ";
    }

    return 1;

}