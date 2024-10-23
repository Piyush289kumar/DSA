/* Q9: Majority Element
Difficulty: MediumAccuracy: 27.82%Submissions: 658K+Points: 4

Given an array arr. Find the majority element in the array. If no majority exists, return -1.

    A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

Examples:

Input: arr[] = [3, 1, 3, 3, 2]
Output: 3
Explanation: Since, 3 is present more than n/2 times, so it is the majority element.

Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than n/2 times, so it is the majority element.

Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than n/2 times, so there is no majority element.
*/

#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &arr)
{
    int n = arr.size();
    if (n <= 0)
    {
        return -1;
    }
    if (n == 1)
    {
        return arr[0];
    }
    int freq = 0, ans = -1;
    for (int n : arr)
    {
        if (freq == 0)
        {
            ans = n;
        }
        if (ans == n)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    freq = 0;
    for (int n : arr)
    {
        if (n == ans)
        {
            freq++;
        }
    }
    int majorityEl = n / 2;
    return ((freq > majorityEl) ? ans : -1);
}
int main()
{
    vector<int> arr = {3, 1, 3, 3, 2};        

    cout << "RESPONSE ==> " << majorityElement(arr);

    return 1;
}