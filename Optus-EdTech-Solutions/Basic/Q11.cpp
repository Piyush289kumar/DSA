/* Q11: Prime Factores of N Number. */

#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n;

    cout << "ENTER NUMBER : ";
    cin >> n;

    int i = 2;

    while (i * i <= n)
    {

        while (n % i == 0)
        {
            cout << i << " ";
            n /=i;
        }
        i++;
    }

    if(n > 1){
        cout << n << endl;
    }
    
    return 0;

}