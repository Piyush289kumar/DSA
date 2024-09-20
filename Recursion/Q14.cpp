/*Q14: Sum Of Array Elements.

Example => [1,2,3,4] => 10 */

#include <iostream>

using namespace std;

int sumOfArr(int arr[], int n)
{

    if (n <= 1)
        return arr[0];
    return arr[0] + sumOfArr(arr + 1, n - 1);
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "RESPONSE ==> " << sumOfArr(arr, n);

    return 0;
}