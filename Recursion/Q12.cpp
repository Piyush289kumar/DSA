/* Q12: Say Digit.

Example : 123 => One Two Three. */

#include <iostream>
#include <string>

using namespace std;

string helperSayCount(int n, string nums[], string &ans)
{
    if (n <= 0)
        return ans;

    ans = nums[n % 10] + " " + ans;

    return helperSayCount(n / 10, nums, ans);
}

string sayCount(int &n)
{
    string nums[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eigth", "Nine"};
    string ans = "";

    return helperSayCount(n, nums, ans);
}

int main()
{
    int n = 456;
    cout << "RESPONSE ==> " << sayCount(n);
    return 0;
}