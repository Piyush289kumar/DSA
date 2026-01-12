/* Q36: Factors of a Given Number. */
#include <bits/stdc++.h>
using namespace std;

void fact(int N)
{
    if (N <= 1)
    {
        cout << N << endl;
        return;
    }

    for(int i=1; i*i<=N; i++){
        if(N%i==0){
            cout << i << " ";
            if(N/i != i){
                cout << N/i << " ";
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;

    fact(N);
    return 0;
}