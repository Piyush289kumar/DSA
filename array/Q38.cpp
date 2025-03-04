/* Q38: Spiral Matrix */
#include <bits/stdc++.h>
using namespace std;

void spiralPrint(vector<vector<int>> nums, int N, int M)
{
    int sr = 0, er = N - 1, sc = 0, ec = M - 1;

    while (sr <= er && sc <= ec)
    {
        for (int i = sc; i <= ec; i++)
        {
            cout << nums[sr][i] << " ";
        }
        sr++;

        for (int i = sr; i <= er; i++)
        {
            cout << nums[i][ec] << " ";
        }
        ec--;

        if (sc <= ec)
        {
            for (int i = ec; i >= sc; i--)
            {
                cout << nums[er][i] << " ";
            }
            er--;
        }

        if (sr <= er)
        {
            for (int i = er; i >= sr; i--)
            {
                cout << nums[i][sc] << " ";
            }
            sc++;
        }
    }
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> nums(N, vector<int>(M));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> nums[i][j];
        }
    }

    spiralPrint(nums, N, M);

    return 0;
}
