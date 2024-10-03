/* Q4: At a fun fair, a street vendor is selling different colours of balloons. He sells N number of
different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is
present odd number of times in the bunch of balloons.
Note: If there is more than one colour which is odd in number, then the first colour in the
array which is present odd number of times is displayed. The colours of the balloons can all
be either upper case or lower case in the array. If all the inputs are even in number, display
the message “All are even”.
Example 1: 7 -> Value of N [r,g,b,b,g,y,y] -> B[] Elements B[0] to B[N-1], where each input
element is sepārated by ṉew line.
Output : r -> [r,g,b,b,g,y,y] -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above: r: 1 balloon g: 2 balloons b: 2 balloons y : 2 balloons Hence , r is
only the balloon which is odd in number.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string findOddBalloon(vector<char> &arr)
{
    int n = arr.size();

    if (n == 1)
        return string(1, arr[0]);

    string ans = "All are even";

    vector<int> fq(26, 0);

    for (char c : arr)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            c = tolower(c);
            fq[c - 'a']++;
        }
    }

    for (int i = 0; i < fq.size(); i++)
    {
        if (fq[i] % 2 == 1)
        {
            ans = string(1, tolower(char(i + 'a')));
            return ans;
        }
    }

    return ans;
}

int main()
{

    vector<char> arr = {'r', 'g', 'b', 'b', 'g', 'y', 'y'};

    string res = findOddBalloon(arr);

    cout << "RESPONSE ==> " << res << endl;

    return 1;
}