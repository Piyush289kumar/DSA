// Bubble Sort

#include <stdio.h>

int main()
{
    int inputArry[] = {7, 12, 9, 11, 3};

    int arrayLength = sizeof(inputArry) / sizeof(inputArry[0]);

    for(int trm = 0; trm < arrayLength; trm++){
        
        for (int idx = 0; idx < arrayLength; idx++)
    {
        if(inputArry[idx] > inputArry[idx+1]){
            int tempVal = inputArry[idx];
            inputArry[idx] = inputArry[idx+1];
            inputArry[idx+1] = tempVal;
        }
    }
    }

    for(int idx = 0; idx<arrayLength; idx++){
        printf("\n %d: " , inputArry[idx]);
    }
    return 0;
}