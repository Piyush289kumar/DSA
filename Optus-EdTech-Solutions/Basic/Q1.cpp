/* Q1: Check is number is Prime or Not.*/

#include <iostream>

using namespace std;

bool isPrime(int num)
{
    for (int idx = 2; idx < num; idx++)
    {
        if (num % idx == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num = 8;
    // cout << (isPrime(num) ? "TRUE" : "FALSE") << endl;
    cin >> num;
    // // Test Cases
    cout << (isPrime(num) ? "TRUE" : "FALSE") << endl;
    // cout << (isPrime(30) ? "TRUE" : "FALSE") << endl;
    // cout << (isPrime(35) ? "TRUE" : "FALSE") << endl;
    // cout << (isPrime(86) ? "TRUE" : "FALSE") << endl;
    // cout << (isPrime(9) ? "TRUE" : "FALSE") << endl;
    // cout << (isPrime(13) ? "TRUE" : "FALSE") << endl;

    return 0;
}