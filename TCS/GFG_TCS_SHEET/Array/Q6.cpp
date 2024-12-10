/* Q6: Find all Symmetric Pairs in the array of pairs.

Problem Statement: Given an array of pairs, find all the symmetric pairs in the array.

Examples:

Example 1:
Input: (1,2),(2,1),(3,4),(4,5),(5,4)
Output: (2,1) (5,4)
Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.

Example 2:
Input: (1,5),(2,3),(4,2),(5,1),(2,4)
Output: (2,4) (5,1)
Explanation: Since (1,5) and (2,4) are symmetric pairs and (5,1) and (4,2) are symmetric pairs.
*/

#include <bits/stdc++.h>

using namespace std;

void findSymPairs(vector<vector<int>> &arr, int row)
{

    unordered_map<int,int> hash;

    for(int i = 0; i < row; i++){
        int first = arr[i][0];
        int second = arr[i][1];

        if(hash.find(second) != hash.end() && hash[second] == first){
            cout << "(" << first << ", " << second << ") ";
        }else{
            hash[first] = second;
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    findSymPairs(arr, n);     

    return 0;
}