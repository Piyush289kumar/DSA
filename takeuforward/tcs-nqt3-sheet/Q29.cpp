/* Q29. Check if a number is Armstrong Number or not. */

#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
    int power = 0;
    int copy = num;
    while (copy)
    {
        power++;
        copy /= 10;
    }

    copy = num;

    int armStrongSum = 0;
    while (copy)
    {
        int ld = copy % 10;
        armStrongSum += pow(ld, power);
        copy /= 10;
    }

    return num == armStrongSum;
}

int main()
{
    int N;
    cin >> N;
    cout << isArmstrong(N) << endl;

    return 0;
}