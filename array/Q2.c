// Bubble Sort

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int inputArry[] = {3, 7, 12, 9, 11};

    int arrayLength = sizeof(inputArry) / sizeof(inputArry[0]);

    for (int trm = 0; trm < arrayLength; trm++)
    {
        bool isSwapAble = false;
        for (int idx = arrayLength; idx >= 0; idx--)
        {
            if (inputArry[idx] > inputArry[idx + 1])
            {
                int tempVal = inputArry[idx];
                inputArry[idx] = inputArry[idx + 1];
                inputArry[idx + 1] = tempVal;
                isSwapAble = true;
            }
        }
        if (!isSwapAble)
        {
            break;
        }
    }

    for (int idx = 0; idx < arrayLength; idx++)
    {
        printf("\n %d: ", inputArry[idx]);
    }
    return 0;
}