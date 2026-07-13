#include <bits/stdc++.h>
using namespace std;

vector<int> findMax(vector<int> &color, vector<int> &sz)
{
    int n = color.size();

    vector<int> ans(n + 1, -1);

    for (int i = 0; i < n; i++)
    {        
        ans[color[i]] = max(ans[color[i]], sz[i]);
    }

    return ans;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> color(N), sz(N);

    for (int i = 0; i < N; i++)
        cin >> color[i] >> sz[i];

    vector<int> res = findMax(color, sz);

    for(int i=1; i<=res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}