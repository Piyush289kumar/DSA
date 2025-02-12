/* Q25: Check if a number is Palindrome or Not. */

#include <bits/stdc++.h>
using namespace std;

string isPlindrome(int n)
{
    int copy = n;
    int rev;
    while (copy)
    {
        rev = (rev * 10) + (copy % 10);
        copy /= 10;
    }

    return (n == rev) ? "Palindrome Number" : "Not Palindrome";
}

int main()
{
    int N;
    cin >> N;
    cout << isPlindrome(N) << endl;
    return 0;
}