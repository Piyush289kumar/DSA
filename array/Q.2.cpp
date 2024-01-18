/* Question 2: WAP to find the largest three elements in an array. */

#include <iostream>

using namespace std;

int main()
{

    int myArray[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int lengthOfArray = (sizeof(myArray) / sizeof(myArray[0]));

    // Display Original Array
    for (int idx = 0; idx < lengthOfArray; idx++)
    {
        cout << "Original Array : [" << idx << "] : " << myArray[idx] << endl;
    }
    cout << endl;

    // Sort Algorithm
    for (int ite = 0; ite < lengthOfArray; ite++)
    {

        for (int idx = ite + 1; idx < lengthOfArray; idx++)
        {
            if (myArray[ite] > myArray[idx])
            {

                int tempVal = myArray[ite];
                myArray[ite] = myArray[idx];
                myArray[idx] = tempVal;
            }
        }
    }

    // Display Sorted Array
    for (int idx = 0; idx < lengthOfArray; idx++)
    {
        cout << "Sort Array : [" << idx << "] : " << myArray[idx] << endl;
    }

    // Display Largest Element of Array
    for (int idx = lengthOfArray - 1; idx > lengthOfArray - 4; idx--)
    {
        cout << "Largest Element of Array : [" << idx << "] : " << myArray[idx] << endl;
    }

    return 0;
}