// Selection Sort

#include <stdio.h>

int main()
{

    int myArry[] = {64, 34, 25, 5, 22, 11, 90, 12};
    int arrayLength = sizeof(myArry) / sizeof(myArry[0]);

    int minEleVal = myArry[0];
    int minEleIdx = myArry[0];
    int tmp = 0;

    for (int i = 0; i < arrayLength; i++)
    {

        printf("\nRound %d ", i);
        printf("\n");
        for (int idx = i; idx < arrayLength; idx++)
        {
            printf("%d ", myArry[idx]);
        }
        minEleIdx++;
    }

    printf("Sorted Array: ");

    for (int idx = 0; idx < arrayLength; idx++)
    {
        printf("%d-", myArry[idx]);
    }

    return 0;
}