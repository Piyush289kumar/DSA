// Q4. Find the minimum and maximum element in an array
#include <stdio.h>
#include <conio.h>
int main()
{
    int myArr[] = {1, 2, 3, 4, 5};
    int sizeOfMyArr = sizeof(myArr) / sizeof(myArr[0]);
    int minVal;
    int maxVal = 0;
    for (int idx = 0; idx < sizeOfMyArr; idx++)
    {
        if (minVal > myArr[idx])
        {
            minVal = myArr[idx];
        }
        if (maxVal < myArr[idx])
        {
            maxVal = myArr[idx];
        }
    }
    printf("\n\nMinimum Value is : %d", minVal);
    printf("\n\nMaximun Value is : %d", maxVal);
    return 0;
}