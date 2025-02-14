/* Q46: Check if a number is a Strong Number or not. */

#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

bool is_strong_number(string num)
{
    int sumOfFactorial = 0;

    for (auto n : num)
    {
        sumOfFactorial += factorial(n - '0');
    }

    return (to_string(sumOfFactorial) == num);
}

int main()
{
    string N;
    cin >> N;
    cout << (is_strong_number(N) ? "Yes\n" : "No\n");
}