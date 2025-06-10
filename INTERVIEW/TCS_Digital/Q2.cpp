#include <bits/stdc++.h>

using namespace std;

void pattern(int N)
{

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    
}

int main()
{
    int N;
    cin >> N;

    pattern(N);

    return 0;
}