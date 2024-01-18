/* Question 2: WAP to find the largest three elements in an array. */

#include <iostream>

using namespace std;

int main()
{

    int myArray[] = {5, 3, 7, 9, 1};
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

    return 0;
}