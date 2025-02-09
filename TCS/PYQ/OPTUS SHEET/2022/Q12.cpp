#include <bits/stdc++.h>
using namespace std;

string prime(int num)
{

    if (num == 1)
    {
        return to_string(num) + " is a prime number";
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return to_string(num) + " is not a prime number";
        }
    }

    return to_string(num) + " is a prime number";
}

string check()
{

    int x;
    cin >> x;

    if (x > 0)
    {
        return prime(x);
    }

    return "please enter the positive number";
}

int main()
{
    cout << check();
}