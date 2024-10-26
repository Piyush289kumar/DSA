/* Q17: Union of Two Sorted Arrays with Duplicate Elements
Difficulty: MediumAccuracy: 31.39%Submissions: 339K+Points: 4

Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.

    Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.

Examples:

Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: 1 2 3 4 5 6 7
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.

Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
Output: 1 2 3 4 5
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.

Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
Output: 1 2
Explanation: Distinct elements including both the arrays are: 1 2.*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();

    vector<int> unionArr;

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if (unionArr.empty() || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else if (a[i] > b[j])
        {
            if (unionArr.empty() || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
        else
        {
            if (unionArr.empty() || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n)
    {
        if (unionArr.empty() || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (unionArr.empty() || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

vector<int> findIntersection(vector<int> &a, vector<int> &b)
{

    int n = a.size();
    int m = b.size();

    int i = 0;
    int j = 0;

    vector<int> intersection;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {

            if (intersection.empty() || intersection.back() != a[i])
            {
                intersection.push_back(a[i]);
                i++;
                j++;
            }
        }
    }

    while (i < n)
    {
        if (intersection.empty() || intersection.back() != a[i])
        {
            intersection.push_back(a[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (intersection.empty() || intersection.back() != b[j])
        {
            intersection.push_back(b[j]);
        }
        j++;
    }

    return intersection;
}

vector<vector<int>> findUnionAndIntersection(vector<int> &a, vector<int> &b)
{

    vector<vector<int>> result(2);
    result[0] = findUnion(a, b);
    result[1] = findIntersection(a, b);
    return result;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 6, 7};

    vector<vector<int>> res = findUnionAndIntersection(a, b);

    cout << "Union: ";
    for (int num : res[0])
    {
        cout << num << " ";
    }
    cout << "\nIntersection: ";
    for (int num : res[1])
    {
        cout << num << " ";
    }

    return 0;
}