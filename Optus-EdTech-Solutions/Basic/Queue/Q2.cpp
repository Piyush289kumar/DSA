// Q2. Reverse a number using Queue.
#include <bits/stdc++.h>

using namespace std;

void reverseNum(int num)
{

    queue<int> que;

    int copy = num;

    while (copy)
    {
        que.push(copy % 10);
        copy /= 10;
    }

    int res = 0;
    while (!que.empty())
    {
        res = res * 10 + que.front();
        que.pop();
    }

    cout << "RESPONSE ==> " << res;
}

int main()
{

    int num;
    cin >> num;

    reverseNum(num);

    return 0;
}