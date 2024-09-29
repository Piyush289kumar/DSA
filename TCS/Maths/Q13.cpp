/* Q13: Largest and smallest digit of a number
Last Updated : 13 Dec, 2023

Given a number N. The task is to find the largest and the smallest digit of the number.
Examples :


    Input : N = 2346
    Output : 6 2
    6 is the largest digit and 2 is smallest
    Input : N = 5
    Output : 5 5

=========================================

Time Complexity (TC): O(log10​n).
Space Complexity (SC): O(1).

*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> Digits(int n)
{
    if (n < 10)
        return {n, n};

    int largest = 0, smallest = 9;

    while (n != 0)
    {
        int lastDigit = n % 10;

        largest = max(lastDigit, largest);
        smallest = min(lastDigit, smallest);

        n /= 10;
    }
    return {largest, smallest};
}

int main()
{
    // int n = 2346;
    int n = 0;
    vector<int> res = Digits(n);

    cout << endl
         << "Largest Digit: " << res[0] << endl;
    cout << endl
         << "Smallest Digit: " << res[1] << endl;

    return 0;
}