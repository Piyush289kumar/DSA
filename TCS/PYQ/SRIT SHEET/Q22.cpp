/* Q22 : TCS NQT Coding Question – 22
Problem Statement – We want to estimate the cost of painting a property. Interior wall painting cost is
Rs.18 per sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.
Take input as- 1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior
4. Wall in units of square feet
Surface Area of each Exterior Wall in units of square feet
If a user enters zero as the number of walls then skip Surface area values as User may don’t want to paint
that wall. Calculate and display the total cost of painting the property
Example 1:
6
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
Total estimated Cost : 1847.4 INR
*/

#include <bits/stdc++.h>
using namespace std;

float findCost(vector<float> &Interior, vector<float> &Exterior)
{
    float sumIte = 0, sumExt = 0;

    for (auto inte : Interior)
    {
        sumIte += inte;
    }

    for (auto ext : Exterior)
    {
        sumExt += ext;
    }

    return (sumIte * 18) + (sumExt * 12);
}

int main()
{
    int I, E;
    cin >> I >> E;
    vector<float> Interior(I), Exterior(E);

    for (int i = 0; i < I; i++)
    {
        cin >> Interior[i];
    }
    for (int i = 0; i < E; i++)
    {
        cin >> Exterior[i];
    }

    cout << "Total estimated Cost : " << findCost(Interior, Exterior) << " INR" << endl;

    return 0;
}