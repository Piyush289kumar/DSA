// Q7: Count number of occurrences (or frequency) in a sorted array.
#include <bits/stdc++.h>
using namespace std;
int countOccurences(int paramArr[], int sizeOfArray, int element)
{
    sort(paramArr, paramArr + sizeOfArray);
    int count = 0;
    for (int idx = 0; idx < sizeOfArray; idx++)
    {
        if (element == paramArr[idx])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int myArray[] = {1, 1, 2, 2, 2, 2, 3};
    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);
    int element = 1;
    int occurencesCount = countOccurences(myArray, sizeOfArray, element);
    cout << "Element : " << element << " is occured in array " << occurencesCount << " times ";
    return 0;
}