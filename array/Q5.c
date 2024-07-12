// Q5: Write a program to reverse the array
// Method 1: Create and Push element in new array.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// int main()
// {
//     int myArry[] = {2, 3, 4, 3, 2, 1};
//     int myArryLength = sizeof(myArry) / sizeof(myArry[0]);
//     int *newArry = (int *)malloc(myArryLength * sizeof(int));
//     if (newArry == NULL)
//     {
//         printf("Memory is not allocated");
//         return 1;
//     }
//     for (int idx = 0; idx < myArryLength; idx++)
//     {
//         newArry[idx] = myArry[(myArryLength - 1) - idx];
//     }
//     printf("\n\nORG Array: ");
//     for (int idx = 0; idx < myArryLength; idx++)
//     {
//         printf("[%d] ", myArry[idx]);
//     }
//     printf("\n\nREVERSE Array: ");
//     for (int idx = 0; idx < myArryLength; idx++)
//     {
//         printf("[%d] ", newArry[idx]);
//     }
//     free(newArry);
//     return 0;
// }
// Method 2: SWAP Elements
int main()
{
    int myArry[] = {2, 3, 4, 3, 2, 1};
    int myArryLength = sizeof(myArry) / sizeof(myArry[0]);
    int midIdx = (int)ceil(myArryLength / 2);
    int tempVal = 0;
    printf("Mid Idx = %d", midIdx);
    printf("\n\nORG ARRAY: ");
    for (int idx = 0; idx < myArryLength; idx++)
    {
        printf("[%d] ", myArry[idx]);
    }
    for (int idx = 0; idx < midIdx; idx++)
    {
        tempVal = myArry[idx];
        myArry[idx] = myArry[((myArryLength - 1) - idx)];
        myArry[(myArryLength - 1) - idx] = tempVal;
    }
    printf("\n\nSWAP ARRAY: ");
    for (int idx = 0; idx < myArryLength; idx++)
    {
        printf("[%d] ", myArry[idx]);
    }
    return 0;
}