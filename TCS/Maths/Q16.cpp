/* Q16: Decimal to binary
Difficulty: BasicAccuracy: 55.75%Submissions: 22K+Points: 1

Given a decimal number N, compute its binary equivalent.

Example 1:

Input: N = 7
Output: 111



Example 2:

Input: N = 33
Output: 100001

Your Task:
You don't need to read input. Complete the function toBinary() which takes the decimal number N as the input parameter and prints its binary equivalent.
Note: Print the output in a single line, the next line character is printed by the Driver Code.*/

#include <iostream>
#include <string>

using namespace std;

void toBinary(int &n)
{
    string binary = "";

    while (n != 0)
    {
        int bit = n & 1;

        binary = to_string(bit) + binary;

        n = n >> 1;
    }

    if (binary == "")
        binary = "0";

    cout
        << "RESPONSE ==> " << binary;
}
int main()
{
    int n = 5;

    toBinary(n);
    return 0;
}