/* Q21: Check if a number is Palindrome or Not. */

#include <bits/stdc++.h>
using namespace std;

bool isPal(string &N)
{
    int left = 0, right = N.size() - 1;
    while (left < right)
        if (N[left++] != N[right--])
            return false;

    return true;
}

int main()
{
    string N;
    cin >> N;

    cout << "ANS => " << ((isPal(N)) ? "Yes" : "No");
}