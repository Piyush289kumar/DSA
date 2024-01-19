/* Question 3: Write a C++ program to find the second largest element in an array of integers. */

#include <iostream>

using namespace std;

int main()
{

    int myArray[] = {1, 2, 3, 4, 5, 6};
    int myArrayLength = (sizeof(myArray) / sizeof(myArray[0])) - 1;

    int firstLargestElement = 0;
    int secondLargestElement = 0;

    for (int idx = 0; idx < myArrayLength; idx++)
    {

        if (firstLargestElement < myArray[idx])
        {
            secondLargestElement = firstLargestElement;
            firstLargestElement = myArray[idx];
        }
        else if (secondLargestElement < myArray[idx] && firstLargestElement != myArray[idx])
        {
            secondLargestElement = myArray[idx];
        }
    }

    cout << "First Largest Elemen of Arrray is : " << firstLargestElement << endl;
    cout << "Second Largest Elemen of Arrray is : " << secondLargestElement;

    return 0;
}