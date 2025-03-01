/*
Q5. We want to estimate the cost of painting a property. Interior wall painting cost is Rs.18 per
sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.
Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior
4. Wall in units of square feet
Surface Area of each Exterior Wall in units of square feet
If a user enters zero as the number of walls then skip Surface area values as User may don’t
want to paint that wall.
Calculate and display the total cost of painting the property
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
Note: Follow in input and output format as given in above example
*/
#include <bits/stdc++.h>
using namespace std;

void estimateCost()
{

    int NumberInteriorwalls;
    cin >> NumberInteriorwalls;
    int NumberExteriorwalls;
    cin >> NumberExteriorwalls;

    if (NumberInteriorwalls < 0 || NumberExteriorwalls)
    {
        cout << "INVALID INPUT";
    }
    else if (NumberInteriorwalls == 0 && NumberExteriorwalls == 0)
    {
        cout << "Total estimated Cost : 0.0";
    }

    double sumOfInteriorwallCost = 0;
    double sumOfExteriorwallCost = 0;

    while (NumberInteriorwalls--)
    {
        float currWall;
        cin >> currWall;

        if (currWall < 0)
        {
            currWall = 0;
        }

        sumOfInteriorwallCost += currWall;
    }

    while (NumberExteriorwalls--)
    {
        float currWall;
        cin >> currWall;

        if (currWall < 0)
        {
            currWall = 0;
        }

        sumOfExteriorwallCost += currWall;
    }

    cout << "Total estimated Cost : " << sumOfInteriorwallCost * 18.0 + sumOfExteriorwallCost * 12.0;
}

int main()
{
    estimateCost();
    return 0;
}