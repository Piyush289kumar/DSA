/* Q33: Sum of first N Natural Numbers. */
#include <bits/stdc++.h>
using namespace std;

int SumOfNaturalNumbers(int num){
    if(num <= 0){
        return 0;
    }

    // int sum = 0;
    // for(int i = 1; i <= num; i++){
    //     sum += i;
    // }

    int sum = num * (num + 1) / 2;

    return sum;
}

int main()
{
    int N;
    cin >> N;
    cout << SumOfNaturalNumbers(N) << endl;
    return 0;
}