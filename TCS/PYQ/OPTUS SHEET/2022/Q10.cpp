#include <bits/stdc++.h>

using namespace std;

string doctorEr()
{

    int x, fees, count;

    while (cin >> x)
    {
        count++;
        if ((x <= 0 || x > 120))
        {
            return "INVALID INPUT";
        }

        if (x <= 17)
        {
            fees += 200;
        }
        else if (x > 17 && x <= 40)
        {
            fees += 400;
        }
        else
        {
            fees += 300;
        }
    }

    if (count > 20)
    {
        return "INVALID INPUT";
    }

    return "Total Income " + to_string(fees) + " INR";
}

int main()
{

    cout << doctorEr();

    return 0;
}