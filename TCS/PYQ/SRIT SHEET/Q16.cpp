/* Q16: TCS NQT Coding Question – 16
Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler
(FW). A company manager wants to make the production of both types of vehicle according to the given data
below:
 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
 2nd data, Total number of wheels = W
The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given
data.
Example : Input :
200 -> Value of V
540 -> Value of W
Output : TW =130 FW=70
Explanation: 130+70 = 200 vehicles
(70*4)+(130*2)= 540 wheelsConstraints :
 2<=W
 W%2=0
 V<W
Print “INVALID INPUT” , if inputs did not meet the constraints.
*/

#include <bits/stdc++.h>
using namespace std;

void findManufactureNumber(int &V, int &W)
{
    if (W < 2 || W % 2 != 0 || V >= W)
    {
        cout << "INVALID INPUT";
    }

    int FW = (W / 2) - V;
    int TW = V - FW;

    cout << "TW = " << TW << " FW = " << FW << endl;
}

int main()
{
    int V, W;
    cin >> V >> W;

    findManufactureNumber(V, W);
    return 0;
}