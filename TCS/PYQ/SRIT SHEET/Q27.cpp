/* Q27: TCS NQT Coding Question – 27
Problem Statement – A parking lot in a mall has RxC number of parking spaces. Each parking space will either
be empty(0) or full(1). The status (0/1) of a parking space is represented as the element of the matrix. The
task is to find index of the row(R) in the parking lot that has the most of the parking spaces full(1).
Note : RxC- Size of the matrix Elements of the matrix M should be only 0 or 1.
Example 1: Input :
3 -> Value of R(row) 3 -> value of C(column)
[0 1 0 1 1 0 1 1 1] -> Elements of the array M[R][C] where each element is separated by new line.
Output :
3 -> Row 3 has maximum number of 1’s
Example 2:
input : 4 -> Value of R(row)
3 -> Value of C(column)
[0 1 0 1 1 0 1 0 1 1 1 1] -> Elements of the array M[R][C]
Output :
4 -> Row 4 has maximum number of 1’s
*/

#include <bits/stdc++.h>
using namespace std;

int fullParkingSpace(vector<int> &nums, int boxSize)
{
    int cnt = 0, onesCnt = 0, maxRow = 1, currRow = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            onesCnt++;
        }
        if ((i + 1) % boxSize == 0)
        {
            if (onesCnt > cnt)
            {
                cnt = onesCnt;
                maxRow = currRow;
            }
            onesCnt = 0;
            currRow++;
        }
    }

    return maxRow;
}

int main()
{
    int R, C;
    cin >> R >> C;

    vector<int> nums(R * C);

    for (int i = 0; i < R * C; i++)
    {
        cin >> nums[i];
    }

    cout << fullParkingSpace(nums, C) << endl;

    return 0;
}