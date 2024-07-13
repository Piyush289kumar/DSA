// Q6: K’th Smallest Element in Unsorted Array
#include <bits/stdc++.h>
using namespace std;

int kthSmallestElement(int paramArray[], int sizeOfArray, int kthElement = 1)
{
    sort(paramArray, paramArray + sizeOfArray);

    return paramArray[kthElement - 1];
}

int main()
{
    int myArr[] = {7, 10, 4, 3, 20, 15};

    int lengthOfArr = sizeof(myArr) / sizeof(myArr[0]), k = 3;

    cout << "\nKth = 2 => " << kthSmallestElement(myArr, lengthOfArr, k);

    return 0;
}