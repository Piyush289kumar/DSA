// Q15. Find duplicates in O(n) time and O(1) extra space | Set 1.

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int myArr[] = {1, 2, 3, 6, 3, 6, 1};

    int N = sizeof(myArr) / sizeof(myArr[0]);
    vector<int> dupEle;
    int occure = 0;

    for (int i = 0; i < N; i++)
    {
        occure = 0;
        for (int j = 0; j < N; j++)
        {
            if (myArr[i] == myArr[j])
            {
                occure++;
            }
        }
        if (occure > 1)
        {

            dupEle.push_back(myArr[i]);
        }
    }

    cout << "Duplicated Element : ";

    for (int i = 0; i < dupEle.size(); i++)
    {
        cout << dupEle[i] << " ";
    }

    return 0;
}