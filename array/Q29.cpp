/* Q29:  Sum Of Two Arrays (code360 - Coding Ninjas)
Easy

Problem statement

You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit. You need to find the sum of these two numbers and return this sum in the form of an array.

Note:

1. The length of each array is greater than zero.

2. The first index of each array is the most significant digit of the number. For example, if the array A[] = {4, 5, 1}, then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.

3. Both numbers do not have any leading zeros in them. And subsequently, the sum should not contain any leading zeros.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:

1 <= T <= 10^2
1 <= N, M <= 10^4
0 <= A[i], B[i] <= 9

}*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;

    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;
    int carray = 0;

    vector<int> ans;

    // OverLapping Terms
    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carray;
        carray = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // When a has remening elements
    while (i >= 0)
    {
        int sum = a[i] + carray;
        carray = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // When b has remening elements
    while (j >= 0)
    {
        int sum = b[j] + carray;
        carray = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // When Carray is Remening
    while (carray != 0)
    {
        int sum = carray;
        carray = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main()
{
    // vector<int> a = {1, 2, 3, 4};
    // int n = a.size();
    // vector<int> b = {7, 6};
    // int m = b.size();

    vector<int> a = {6};
    int n = a.size();
    vector<int> b = {2,3};
    int m = b.size();

    vector<int> response = findArraySum(a, n, b, m);

    cout << endl
         << "Response --> ";
    for (int idx = 0; idx < response.size(); idx++)
    {
        cout << response[idx] << " ";
    }

    return 0;
}