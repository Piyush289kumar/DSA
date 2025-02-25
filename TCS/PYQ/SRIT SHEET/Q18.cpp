/* Q18: TCS NQT Coding Question – 18
Problem Statement – There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is
JAR can contain maximum N candies when JAR is full. At any point of time. JAR can have M number of Candies
where M<=N. Candies are served to the customers. JAR never remains empty as when last k candies are left.
JAR if refilled with new candies in such a way that JAR get full. Write a code to implement above scenario.
Display JAR at counter with available number of candies. Input should be the number of candies one customer
can order at point of time. Update the JAR after each purchase and display JAR at Counter. Output should
give number of Candies sold and updated number of Candies in JAR.
If Input is more than candies in JAR, return: “INVALID INPUT”
Given, N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, where k is number of minimum candies that must be inside JAR ever.
Example 1:(N = 10, k =< 5)
Input Value 3
Output Value
NUMBER OF CANDIES SOLD : 3
NUMBER OF CANDIES AVAILABLE : 7
Example : (N=10, k<=5)
Input Value 0
Output Value
INVALID INPUT NUMBER OF
CANDIES LEFT : 10
*/

#include <bits/stdc++.h>
using namespace std;

void candiesJar(int N, int K, int C)
{
    if (C <= 0 || C > N)
    {
        cout << "INVALID INPUT" << endl;
        cout << "CANDIES LEFT : " << N;
        return;
    }

    cout << "NUMBER OF CANDIES SOLD : " << C << endl;
    N -= C;

    if (N < K)
    {
        N = 10;
    }

    cout << "NUMBER OF CANDIES AVAILABLE : " << N << endl;
}

int main()
{
    int N, K, C;
    cin >> N >> K >> C;

    candiesJar(N, K, C);

    return 0;
}