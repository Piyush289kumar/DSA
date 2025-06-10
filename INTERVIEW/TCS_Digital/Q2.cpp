/* Q2: Start Patterns */
#include <bits/stdc++.h>

using namespace std;

void patternA(int N)
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

void patternB(int N)
{

    for (int i = N; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
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

    patternA(N);
    cout << endl;
    patternB(N);

    return 0;
}