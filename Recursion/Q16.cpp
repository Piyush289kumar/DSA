/* Q16: Nth Power Of a number.

Example

a = 2, b= 4
output : a^b = 16
*/

#include <iostream>
using namespace std;

int nthPower(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int ans = nthPower(a, b / 2);

    return (b % 2 == 0) ? ans * ans : a * ans * ans;
}

int main()
{
    int a = 2;
    int b = 4;

    cout << "RESPONSE ==> " << nthPower(a, b);

    return 0;
}
