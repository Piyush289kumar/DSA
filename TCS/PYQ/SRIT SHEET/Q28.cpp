/* Q28: TCS NQT Coding Question – 28
Problem Statement – A party has been organized on cruise. The party is organized for a limited time(T).
The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of
the array. The task is to find the maximum number of guests present on the cruise at any given instance
within T hours.
Example 1:
Input : 5 -> Value of T
[7,0,5,1,3] -> E[], Element of E[0] to E[N-1], where input each element is separated by new line
[1,2,1,3,4] -> L[], Element of L[0] to L[N-1], while input each element is separate by new line.
Output : 8 -> Maximum number of guests on cruise at an instance.
Explanation: 1st hour:
Entry : 7 Exit: 1
No. of guests on ship : 6
2nd hour :
Entry : 0 Exit : 2
No. of guests on ship : 6-2=4
Hour 3:
Entry: 5 Exit: 1
No. of guests on ship : 4+5-1=8
Hour 4:
Entry : 1 Exit : 3
No. of guests on ship : 8+1-3=6
Hour 5:
Entry : 3 Exit: 4
No. of guests on ship: 6+3-4=5
Hence, the maximum number of guests within 5 hours is 8.Example 2:
Input: 4 -> Value of T
[3,5,2,0] -> E[], Element of E[0] to E[N-1], where input each element is separated by new line.
[0,2,4,4] -> L[], Element of L[0] to L[N-1], while input each element in separated by new line
Output: 6
Explanation: Hour 1:
Entry: 3 Exit: 0
No. of guests on ship: 3
Hour 2:
Entry : 5 Exit : 2
No. of guest on ship: 3+5-2=6
Hour 3:
Entry : 2 Exit: 4
No. of guests on ship: 6+2-4= 4
Hour 4:
Entry: 0 Exit : 4
No. of guests on ship : 4+0-4=0
Hence, the maximum number of guests within 5 hours is 6.

*/

#include <bits/stdc++.h>
using namespace std;

int maxGNumber(vector<int> &entry, vector<int> &exit)
{
    int maxG = 0, currG = 0;

    for (int i = 0; i < entry.size(); i++)
    {
        currG += entry[i] - exit[i];
        maxG = max(maxG, currG);
    }

    return maxG;
}

int main()
{
    int N;
    cin >> N;
    vector<int> entry(N), exit(N);

    for (int i = 0; i < N; i++)
    {
        cin >> entry[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> exit[i];
    }

    cout << maxGNumber(entry, exit) << endl;

    return 0;
}