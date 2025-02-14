/* Q53: Find the sum of numbers in the given range.

Formula : sum of the first nn natural numbers:
            Sn = n(n+1)/2


            The sum of the first rr natural numbers:
            Sr = r(r+1)/2

            The sum of the first (l−1)(l−1) natural numbers:
            Sl−1 = (l−1)*l/2

            The sum of numbers from ll to rr is:
            Sr−Sl−1

​*/
#include <bits/stdc++.h>
using namespace std;

int rangeSum(int l, int r)
{
    return ((r * (r + 1) / 2) - ((l - 1) * l / 2));
}

int main()
{
    int l, r;
    cin >> l >> r;
    cout << rangeSum(l, r) << endl;
    return 0;
}