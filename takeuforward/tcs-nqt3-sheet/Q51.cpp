/* Q51: Check if the number is an abundant number or not. */
#include <bits/stdc++.h>
using namespace std;

bool is_abundant_number(int N)
{

    int sum = 0;
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            sum += i;
        }
    }

    return (N < sum);
}

int main()
{
    int N;
    cin >> N;
    cout << (is_abundant_number(N) ? "Abundant Number" : "Not Abundant Number") << endl;
    return 0;
}