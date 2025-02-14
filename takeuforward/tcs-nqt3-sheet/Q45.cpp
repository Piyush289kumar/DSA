/* Q45: Print all Prime Factors of the given number. */

#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int num)
{
    if (num == 1)
    {
        return false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
vector<int> allPrimeFactors(int num)
{

    vector<int> allFactors;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            allFactors.push_back(i);
        }
    }

    vector<int> primeFactors;

    for (int factor : allFactors)
    {
        if (is_Prime(factor))
        {
            primeFactors.push_back(factor);
        }
    }

    return primeFactors;
}

int main()
{
    int N;
    cin >> N;
    vector<int> res = allPrimeFactors(N);
    for (int num : res)
    {
        cout << num << ", ";
    }
    return 0;
}