/* Q2: Given an array of integers, where all elements but one occur twice, find the unique element.

Example
The unique element is

.

Function Description

Complete the lonelyinteger function in the editor below.

lonelyinteger has the following parameter(s):

    int a[n]: an array of integers

Returns

    int: the element that occurs only once

Input Format

The first line contains a single integer,
, the number of integers in the array.
The second line contains space-separated integers that describe the values in .
*/

#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector<int> a)
{

    unordered_map<int, int> freq;

    for (int n : a)
    {
        freq[n]++;
    }
    for (pair<int, int> idx : freq)
    {
        if (idx.second == 1)
        {
            return idx.first;
        }
    }

    return -1;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 3, 2, 1};
    vector<int> b = {0, 0, 1, 2, 1};

    cout << "RESPONSE ==> " << lonelyinteger(a) << endl;
    cout << "RESPONSE ==> " << lonelyinteger(b) << endl;

    return 0;
}