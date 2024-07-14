// Q10. Move all the negative elements to one side of the array.
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int myArr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int length = sizeof(myArr) / sizeof(myArr[0]);
    sort(myArr, myArr + length);
    for (int idx = 0; idx <= length; idx++)
    {
        cout << myArr[idx] << " ";
    }
    return 0;
}