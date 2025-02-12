/* Q28: Prime Numbers in a given range. */

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

vector<int> allPrime(int minVal, int maxVal)
{

    vector<int> ans;

    for (int i = minVal; i <= maxVal; i++)
    {
        if (isPrime(i))
        {
            ans.push_back(i);
        }
    }

    return ans;
}

int main()
{
    int minVal, maxVal;
    cin >> minVal >> maxVal;

    vector<int> res = allPrime(minVal, maxVal);

    for (int num : res)
    {
        cout << num << ", ";
    }
    cout << endl;
    return 0;
}