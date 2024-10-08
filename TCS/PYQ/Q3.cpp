/* Q3: Given an integer array Arr of size N the task is to find the count of elements whose value
is greater than all of its prior elements.
Note : 1st element of the array should be considered in the count of the result. For example,
Arr[]={7,4,8,2,9} As 7 is the first element, it will consider in the result. 8 and 9 are also the
elements that are greater than all of its previous elements. Since total of 3 elements is
present in the array that meets the condition.
Hence the output = 3.
Example 1:
Input 5 -> Value of N, represents size of Arr
7-> Value of Arr[0]
4 -> Value of Arr[1]
8-> Value of Arr[2]
2-> Value of Arr[3]
9-> Value of Arr[4]
Output : 3
*/

#include <iostream>

using namespace std;

int findPrior(int arr[], int n)
{

    if (n == 0)
        return 0;

    int count = 1;
    int maxi = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            count++;
            maxi = arr[i];
        }
    }

    return count;
}

int main()
{
    int arr[5] = {7, 4, 8, 2, 9};
    int n = 5;

    int res = findPrior(arr, n);

    cout << "RESPONSE ==> " << res << endl;

    return 1;
}