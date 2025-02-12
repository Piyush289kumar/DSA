/* Q26: Find all Palindrome Numbers in a given range. */
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num)
{
    int copy = num;
    int rev = 0;
    while (copy)
    {
        rev = (rev * 10) + (copy % 10);
        copy /= 10;
    }

    return rev == num;
}

vector<int> findAllPalindrome(int minVal, int maxVal)
{
    vector<int> ans;

    for (int i = minVal; i <= maxVal; i++)
    {
        if (isPalindrome(i))
        {
            ans.push_back(i);
        }
    }

    return ans;
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> res = findAllPalindrome(N, M);

    for (int num : res)
    {
        cout << num << ", ";
    }

    cout << endl;

    return 0;
}