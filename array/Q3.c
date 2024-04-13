// Selection Sort
#include <stdio.h>
int main()
{
    int myArray[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int sizeOfArray = ((sizeof(myArray) / sizeof(myArray[0])) - 1);
    for (int idx = 0; idx <= sizeOfArray; idx++)
    {
        int minIdx = idx;
        for (int innerIdx = idx + 1; innerIdx <= sizeOfArray; innerIdx++)
        {
            if (myArray[minIdx] > myArray[innerIdx])
            {
                minIdx = innerIdx;
            }
        }
        // Swap the element
        int temp = myArray[idx];
        myArray[idx] = myArray[minIdx];
        myArray[minIdx] = temp;
    }
    // Print Sorted Array
    printf("\nSorted Array: \n");
    for (int idx = 0; idx <= sizeOfArray; idx++)
    {
        printf("%d ", myArray[idx]);
    }
    return 0;
}