/* Q23: Sort an array according to the order defined by another array. */

#include <bits/stdc++.h>
using namespace std;

void refSort(vector<int> &a1, vector<int> &a2)
{
    map<int, int> hash;
    for (auto a : a1)
        hash[a]++;

    vector<int> ans;

    for (auto a : a2)
    {
        if (hash.count(a))
        {
            ans.insert(ans.end(), hash[a], a);
            hash.erase(a);
        }
    }

    // remaining el
    for(auto el : hash){
        ans.insert(ans.end(), el.second, el.first);
    }


    // output 
    for(auto a : ans) cout << a << " ";
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> a1(N);
    vector<int> a2(M);
    for (int i = 0; i < N; i++)
        cin >> a1[i];
    for (int i = 0; i < M; i++)
        cin >> a2[i];

    refSort(a1, a2);

    return 0;
}