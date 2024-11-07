/* Q3: Check is Armstrong Number or Not. */

#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num)
{
    if (num == 0)
    {
        return true;
    }
    int org = num;

    int ans = 0;

    int numCopy = num;
    int numLength = 0;

    while (numCopy != 0)
    {
        int lastDigit = numCopy % 10;
        numCopy /= 10;
        numLength++;
    }

    while (num != 0)
    {
        int lastDigit = num % 10;
        ans = ans + pow(lastDigit, numLength);
        num /= 10;        
    }

    return (org == ans);
}
int main()
{
    int num = 153;    
    // cin >> num;
    cout << (isArmstrong(num) ? "TRUE" : "FALSE") << endl;

    return 0;
}