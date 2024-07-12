// Q5: Write a program to reverse the array
// Method 1: Create and Push element in new array.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int myArry[] = {2, 3, 4, 3, 2, 1};
    int myArryLength = sizeof(myArry) / sizeof(myArry[0]);
    int *newArry = (int *)malloc(myArryLength * sizeof(int));
    if (newArry == NULL)
    {
        printf("Memory is not allocated");
        return 1;
    }
    for (int idx = 0; idx < myArryLength; idx++)
    {
        newArry[idx] = myArry[(myArryLength - 1) - idx];
    }
    printf("\n\nORG Array: ");
    for (int idx = 0; idx < myArryLength; idx++)
    {
        printf("[%d] ", myArry[idx]);
    }
    printf("\n\nREVERSE Array: ");
    for (int idx = 0; idx < myArryLength; idx++)
    {
        printf("[%d] ", newArry[idx]);
    }
    free(newArry);
    return 0;
}