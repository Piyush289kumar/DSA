/* Q2: Check Number is Palamdrome or Not.*/

#include <iostream>

using namespace std;

bool isPalamdrome(int num)
{
    if (num == 0)
    {
        return true;
    }
    int org = num;
    int rev = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num /= 10;
    }
    return (org == rev);
}
int main()
{
    int num;
    cin >> num;
    cout << (isPalamdrome(num) ? "TRUE" : "FALSE") << endl;

    return 0;
}