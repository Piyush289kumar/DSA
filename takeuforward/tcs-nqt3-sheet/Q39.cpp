/* Q39: Reverse digits of a number. */
#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int n)
{
    int rev = 0;
    while (n)
    {
        rev = (rev * 10) + n % 10;
        n /= 10;
    }

    return rev;
}
int main()
{
    int n;
    cin >> n;
    cout << reverseDigits(n) << endl;
    return 0;
}