/* Question 4: Write a C++ program to find the k largest elements in a given array of integers. */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int myArray[] = {4, 5, 9, 12, 9, 22, 45, 7, 0, -2};
    int arrayLength = (sizeof(myArray) / sizeof(myArray[0]));
    int k = 4;

    cout << "Original Array Element : ";
    for (int idx = 0; idx < arrayLength; idx++)
    {
        cout << myArray[idx] << " ";
    }

    sort(myArray, myArray + arrayLength, greater<int>());

    cout << endl
         << "Largest " << k << " Element : ";
    for (int idx = 0; idx < k; idx++)
    {
        cout << myArray[idx] << " ";
    }

    return 0;
}