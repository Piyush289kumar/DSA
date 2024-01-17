/* Question 1: Write a C++ program to find the largest element of a given array of integers. */

/*

Method 1:

=======================================================

#include <iostream>
#include <algorithm>

using namespace std;

int findLargestElement(int arrayArgs[], int numberOfElementArgs)
{
    return *std::max_element(arrayArgs, arrayArgs + numberOfElementArgs);
}

int main()
{

    int myArray[] = {2, 54, 89, 5, 200};

    int numberOfElement = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Original Array : " << endl;

    for (int idx = 0; idx < numberOfElement; idx++)
    {
        cout << myArray[idx] << " - ";
    }

    cout << "\n\nLargest Element of said Array :" << findLargestElement(myArray, numberOfElement);

    return 0;
}
*/

/* Method 2:

=======================================================*/

#include <iostream>

using namespace std;

int main()
{

    int numberOfElement;
    int myArray[10];

    // Take Input From User
    cout << "Enter total Element You Wanna Enter : ";
    cin >> numberOfElement;

    // Push Element into Array

    for (int idx = 0; idx < numberOfElement; idx++)
    {
        cout << "Enter Element [" << idx + 1 << "] = ";
        cin >> myArray[idx];
    }

    // Display Original Array

    int arrayLength = sizeof(myArray) / sizeof(myArray[0]);

    for (int idx = 0; idx < arrayLength; idx++)
    {
        if (!myArray[idx] == 0)
        {
            cout << "Original Array : " << myArray[idx] << endl;
        }
    }

    // Find Largest Element in Array

    int largestElementOfArray = 0;
    for (int idx = 0; idx < arrayLength; idx++)
    {
        if (!myArray[idx] == 0)
        {
            if (largestElementOfArray < myArray[idx])
            {
                largestElementOfArray = myArray[idx];
            }
            cout << "Value of myArray[idx] : " << idx << " : " << largestElementOfArray << endl;
        }
    }

    cout << "Largest Element of Given Array : " << largestElementOfArray << endl;

  
    return 0;
}
