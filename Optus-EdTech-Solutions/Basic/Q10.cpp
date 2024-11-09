/* Q10: All Non Repeating Elements */


#include<bits/stdc++.h>

using namespace std;

void printNonRepeating(vector<int> &arr)
{
    unordered_map<int, int> hash;
    for (int num : arr)
    {
        hash[num]++;
    }

    vector<int> res;
       
    for (auto &pair : hash)
    {
        if (pair.second == 1)
        {
            res.push_back(pair.first);
        }
    }


    // Sort 
    sort(res.begin(), res.end());

    // Print
    for(int idx : res){
        cout << idx << endl;
    }

    return;
}

int main()
{

    vector<int> arr;

    int n;
    cout << "Enter Size : ";
    cin >> n;

    cout << endl
         << "Enter Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    printNonRepeating(arr);

    return 0;
}