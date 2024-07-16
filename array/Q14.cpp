// Q14: Count pairs with given sum.

#include <iostream>
using namespace std;
int main()
{
    int myArr[] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int length = sizeof(myArr) / sizeof(myArr[0]);
    int k = 11;
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j <= length - 1; j++)
        {
            // cout << "myArr[" << myArr[i] << "] + " << "myArr[" << myArr[j] << "]" << endl;
            if ((myArr[i] + myArr[j]) == k)
            {
                cout << "(" << myArr[i] << ", " << myArr[j] << ")" << " ";
                // cout << "Pre Count : " << count << endl;
                count++;
                // cout << "Post Count : " << count << endl;
            }
        }
    }
    cout << endl
         << "Output : " << count;
    return 0;
}