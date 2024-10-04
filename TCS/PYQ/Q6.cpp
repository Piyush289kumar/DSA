/* Q6: A party has been organized on cruise. The party is organized for a limited time(T). The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The task is to find the maximum number of guests present on the cruise at any given instance within T hours.

Example 1:

Input :
5 -> Value of T

[7,0,5,1,3] -> E[], Element of E[0] to E[N-1], where input each element is separated by new line
[1,2,1,3,4] -> L[], Element of L[0] to L[N-1], while input each element is separate by new line.
Output :
8 -> Maximum number of guests on cruise at an instance.
*/

#include <iostream>
#include <vector>

using namespace std;

int maxGuests(vector<int> e, vector<int> l)
{

    int maxGuestsAtOnce = 0;
    int currentGuests = 0;

    for (int i = 0; i < e.size(); i++)
    {
        currentGuests += e[i] - l[i];

        if (currentGuests > maxGuestsAtOnce)
        {
            maxGuestsAtOnce = currentGuests;
        }
    }

    return maxGuestsAtOnce;
}

int main()
{

    vector<int> e = {7, 0, 5, 1, 3};
    vector<int> l = {1, 2, 1, 3, 4};

    int res = maxGuests(e, l);

    cout << "RESPONSE ==> " << res;

    return 1;
}