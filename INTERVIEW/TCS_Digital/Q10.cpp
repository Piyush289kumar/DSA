#include <bits/stdc++.h>

using namespace std;

bool is_palam(string str)
{
    int low = 0;
    int high = str.size() - 1;

    while (low < high)
    {
        if (str[low] != str[high])
            return false;

        low++;
        high--;
    }

    return true;
}

int main()
{
    string str;

    cin >> str;

    cout << is_palam(str);

    return 0;
}