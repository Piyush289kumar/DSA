/* Q27: Prime Numbers in a given range. */

#include <bits/stdc++.h>
using namespace std;

vector<int> primeRange(int a, int b)
{
    vector<bool> primeMetrix(b + 1, true);
    primeMetrix[0] = primeMetrix[1] = false;

    vector<int> ans;

    for (int i = 2; i <= b; i++)
    {
        if (primeMetrix[i])
        {
            if (i >= a && i <= b)
            {
                ans.push_back(i);
            }
            // False is divisions
            for (int j = i * 2; j <= b; j = j + i)
            {
                primeMetrix[j] = false;
            }
        }
    }
    
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    vector<int> ans = primeRange(a, b);

    // output
    for (auto n : ans)
        cout << n << " ";

    return 0;
}