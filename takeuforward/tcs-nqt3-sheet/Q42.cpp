/* Q42: Factorial of a Number : Iterative and Recursive. */

#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int main()
{
    int N;
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}