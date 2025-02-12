/* Q22. Sort an array according to the order defined by another array. */
#include <bits/stdc++.h>
using namespace std;

void relativeSortArray(vector<int> &arr1, vector<int> &arr2)
{
    unordered_map<int, int> hash1;
    unordered_map<int, int> hash2;

    vector<int> ans;
    vector<int> remi;

    for (int &num : arr1)
    {
        hash1[num]++;
    }
    for (int &num : arr2)
    {
        hash2[num]++;
    }

    for (int &num : arr2)
    {

        int cnt = hash1[num];
        while (cnt--)
        {
            ans.push_back(num);
        }
    }

    for (int &num : arr1)
    {
        if (hash2.find(num) == hash2.end())
        {
            remi.push_back(num);
        }
    }

    sort(remi.begin(), remi.end());

    ans.insert(ans.end(), remi.begin(), remi.end());

    arr1 = ans;
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> arr1(N);
    vector<int> arr2(M);

    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> arr2[i];
    }

    relativeSortArray(arr1, arr2);

    for (int num : arr1)
    {
        cout << num << ", ";
    }
    cout << endl;

    return 0;
}