/* Q31: TCS NQT Coding Question – 31
Problem Statement – At a fun fair, a street vendor is selling different colours of balloons. He sells N number
of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd
number of times in the bunch of balloons.
Note: If there is more than one colour which is odd in number, then the first colour in the array which is
present odd number of times is displayed. The colours of the balloons can all be either upper case or lower
case in the array. If all the inputs are even in number, display the message “All are even”.
Example 1: input - 7 -> Value of N
[r,g,b,b,g,y,y] -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
Output : r -> [r,g,b,b,g,y,y] -> “r” colour balloon is present odd number of times in the bunch.
Explanation: From the input array above:
r: 1 balloon
g: 2 balloons
b: 2 balloons
y : 2 balloons
Hence , r is only the balloon which is odd in number.
*/

#include <bits/stdc++.h>
using namespace std;

char findOdd(vector<char> &nums)
{
    unordered_map<char, int> freq;
    for (auto ch : nums)
    {
        freq[ch]++;
    }

    for (auto pair : freq)
    {
        if (pair.second % 2 == 1)
        {
            return pair.first;
        }
    }

    return '0';
}

int main()
{
    int N;
    cin >> N;
    vector<char> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    char ans = findOdd(nums);

    if (ans == '0')
    {
        cout << "All are even" << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}