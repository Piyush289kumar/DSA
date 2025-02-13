/* Q40: Maximum and Minimum Digit in a Number. */
#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMaximumAndMinimum(int num)
{
    int minDigit = INT_MAX;
    int maxDigit = INT_MIN;

    while (num)
    {
        int ld = num % 10;
        maxDigit = max(ld, maxDigit);
        minDigit = min(ld, minDigit);
        num /= 10;
    }

    return {maxDigit, minDigit};
}

int main()
{
    int N;
    cin >> N;
    pair<int, int> res = findMaximumAndMinimum(N);
    cout << "Largest digit: " << res.first << endl;
    cout << "Smallest digit: " << res.second;
    return 0;
}