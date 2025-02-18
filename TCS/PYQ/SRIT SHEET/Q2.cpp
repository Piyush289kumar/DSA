/* Q2: Problem Statement – Joseph is learning digital logic subject which will be for his next semester. He usually
tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem
statement is “A positive integer has been given as an input. Convert decimal value to binary representation.
Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer
value after toggling all bits”. Constrains- 1<=N<=100
Example 1:
Input :
10 -> Integer
Output :
5 -> result- Integer
Explanation:
Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence
output will print “5”.
*/

#include <bits/stdc++.h>
using namespace std;

void bitToggling(int N)
{
    if (N < 1 || N > 100)
    {
        cout << "INVALID INPUT";
    }
    /* Method 1: */
    // int temp = 1;
    // while (temp <= N)
    // {
    //     N ^= temp;
    //     temp <<= 1;
    // }

    /* Method 1: */

    N ^= ((1 << (int)log2(N) + 1) - 1);

    cout << N;
}

int main()
{
    int N;
    cin >> N;
    bitToggling(N);
    return 0;
}