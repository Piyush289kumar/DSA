/* Q5: Next Smaller Element.
Level : Moderat
Problem statement

You are given an array 'ARR' of integers of length N. Your task is to find the next smaller element for each of the array elements.

Next Smaller Element for an array element is the first element to the right of that element which has a value strictly smaller than that element.

If for any array element the next smaller element does not exist, you should print -1 for that array element.

For Example:

If the given array is [ 2, 3, 1], we need to return [1, 1, -1]. Because for  2, 1 is the Next Smaller element. For 3, 1 is the Next Smaller element and for 1, there is no next smaller element hence the answer for this element is -1.

*/

#include <bits/stdc++.h>

using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> smallestElementStack;

    smallestElementStack.push(-1);

    vector<int> ans_arr(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr_element = arr[i];

        while (curr_element <= smallestElementStack.top())
        {
            smallestElementStack.pop();
        }

        // Answer yehi hai
        ans_arr[i] = smallestElementStack.top();
        smallestElementStack.push(curr_element);
    }

    return ans_arr;
}

int main()
{

    int n;
    cout << "Enter Size: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> res = nextSmallerElement(arr, n);

    cout << endl
         << "RESPONSE ==> ";
    for (int num : res)
    {
        cout << num << " ";
    }

    return 0;
}