// Q12. Program to cyclically rotate an array by N times.
#include <iostream>
using namespace std;
int main()
{
    int myArr[] = {1, 2, 3, 4, 5};
    int length = sizeof(myArr) / sizeof(myArr[0]) - 1;
    int rotateNum = 1;
    int tempVal = 0;
    for (int rotateIdx = 1; rotateIdx <= rotateNum; rotateIdx++)
    {
        tempVal = myArr[length];
        for (int idx = length; idx > 0; idx--)
        {
            myArr[idx] = myArr[idx - 1];
        }
        myArr[0] = tempVal;
    }
    cout << "Rotated Array : " << endl;
    for (int idx = 0; idx <= length; idx++)
    {
        cout << myArr[idx] << " ";
    }
    return 0;
}
