// Question 1: Find The Lowest Value in an Array.

#include <stdio.h>

int main()
{

    int inputArray[5] = {3, 43, 45, 2, 23};

    int arrayLength = sizeof(inputArray) / sizeof(inputArray[0]);

    int minVal = 0;

    for (int idx = 0; idx < arrayLength; idx++)
    {
        if (minVal == 0)
        {
            minVal = inputArray[idx];
        }

        if (minVal > inputArray[idx])
        {
            minVal = inputArray[idx];
        }
    }

    printf("MinVal : %d", minVal);

    return 0;
}
