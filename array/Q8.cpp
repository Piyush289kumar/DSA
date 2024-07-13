#include <bits/stdc++.h>
using namespace std;
int sortArray(int paramArray[], int n)
{
    sort(paramArray, paramArray + n);
    for (int i = 0; i < n; i++)
    {
        cout << paramArray[i] << " ";
    }
    return 0;
}
int main()
{
    int myArr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int N = sizeof(myArr) / sizeof(myArr[0]);
    cout << "Sorted Array" << endl;
    sortArray(myArr, N);
}