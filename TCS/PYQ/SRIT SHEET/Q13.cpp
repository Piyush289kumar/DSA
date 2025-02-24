/* TCS NQT Coding Question – 13
Problem Statement – Before the outbreak of corona virus to the world, a meeting happened in a room in
Wuhan. A person who attended that meeting had COVID-19 and no one in the room knew about it! So
everyone started shaking hands with everyone else in the room as a gesture of respect and after meeting
unfortunately everyone got infected! Given the fact that any two persons shake hand exactly once, Can you
tell the total count of handshakes happened in that meeting?
Input Format : The first line contains the number of test cases T, T lines follow.
Each line then contains an integer N, the total number of people attended that meeting.
Output Format : Print the number of handshakes for each test-case in a new line.
Constraints : 1 <= T <= 1000
0 < N < 106
Sample Input :
2
1
2
Output :
0
1
Explanation :
Case 1 : The lonely board member shakes no hands, hence 0.
Case 2 : There are 2 board members, 1 handshake takes place.

*/

#include <bits/stdc++.h>
using namespace std;

int totalHandshakes(int N)
{
    return (1ll * N * (N - 1)) / 2;
}
int main()
{
    int T;
    cin >> T;

    if (T < 1 || T > 1000)
    {
        cout << "INVALID INPUT" << endl;
        return 0;
    }
    while (T--)
    {
        int N;
        cin >> N;
        if (N < 0 || N > 106)
        {
            cout << "INVALID INPUT" << endl;
            return 0;
        }
        cout << totalHandshakes(N) << endl;
    }
    return 0;
}