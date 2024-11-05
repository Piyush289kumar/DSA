/* Q3: Check is Armstrong Number or Not. */

#include <iostream>

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

    int multiLastDigit = 1;
    while (num != 0)
    {
        int lastDigit = num % 10;
        int tempNumLength = numLength;

        while (tempNumLength > 0)
        {
            multiLastDigit = multiLastDigit * lastDigit;
            tempNumLength--;
        }

        ans = ans + multiLastDigit;
        num /= 10;
        multiLastDigit = 1;
    }

    return (org == ans);
}
int main()
{
    int num;
    cin >> num;
    cout << (isArmstrong(num) ? "TRUE" : "FALSE") << endl;

    return 0;
}