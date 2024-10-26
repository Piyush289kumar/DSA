/* Q18: Missing in Array
Difficulty: EasyAccuracy: 29.59%Submissions: 1.2MPoints: 2

You are given an array arr of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

Examples:

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: All the numbers from 1 to 5 are present except 4.

Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.

Input: arr[] = [1]
Output: 2
Explanation: Only 1 is present so the missing element is 2.*/

#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int> &arr)
{

    int n = arr.size() + 1;

    int orgSum = (n * (n + 1) / 2);

    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    return orgSum - sum;
}

int main()
{
    vector<int> arr = {4, 6, 7, 9, 2, 1, 8, 11, 10, 3};

    cout << "RSEPONSE ==> " << missingNumber(arr);
    return 0;
}