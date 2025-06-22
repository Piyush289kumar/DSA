/* Q3. Palindrome Number. */

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return 0;

    int copy = x;
    int rev = 0;

    while (copy)
    {
        rev = (rev * 10) + (copy % 10);
        copy /= 10;
        cout << rev << endl;
    }

    return x == rev;
}

int main()
{
    int N;
    cin >> N;

    cout << isPalindrome(N);

    return 0;
}