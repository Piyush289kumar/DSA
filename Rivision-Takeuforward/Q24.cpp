/* Q24: Sum of first N Natural Numbers. */

#include <bits/stdc++.h>
using namespace std;

int sumOfN(int &N){
    return (N*(N+1)/2);
}

int main()
{
    int N;
    cin >> N;

    cout << sumOfN(N) << endl;

    return 0;
}