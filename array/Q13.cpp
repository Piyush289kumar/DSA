// Q13. Find the Missing Number.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int myArr[] = {1, 2, 3, 5, 8};
    int length = sizeof(myArr) / sizeof(myArr[0]);
    vector<int> missingIntegers;
    int occureCount = 0;
    for (int idx = 1; idx <= length; idx++)
    {
        cout << "IDX : " << idx << endl;
        occureCount = 0;
        for (int i = 0; i < length; i++)
        {
            if ((idx) == myArr[i])
            {
                occureCount++;
            }
        }
        if (occureCount <= 0)
        {
            missingIntegers.push_back(idx);
        }
    }
    cout << "Missing Integers : ";
    for (int i = 0; i < missingIntegers.size(); i++)
    {
        cout << missingIntegers[i] << " ";
    }

    return 0;
}