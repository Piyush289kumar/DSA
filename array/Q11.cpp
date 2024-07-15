// Q11: Find the Union and Intersection of the two sorted arrays.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define LENTH_OF_ARR(arr) sizeof(arr) / sizeof(arr[0])

int main()
{

    int arrA[] = {1, 3, 4, 5, 7};
    int arrB[] = {2, 3, 5, 6};

    vector<int> interSection;
    vector<int> unionSection;

    int lenghtA = sizeof(arrA) / sizeof(arrA[0]);
    int lenghtB = sizeof(arrB) / sizeof(arrB[0]);

    // // Get Intersection
    // for (int i = 0; i < lenghtA; i++)
    // {
    //     for (int j = 0; j < lenghtB; j++)
    //     {
    //         if (arrA[i] == arrB[j])
    //         {
    //             interSection.push_back(arrA[i]);
    //             break;
    //         }
    //     }
    // }

    // cout << endl
    //      << "Inter Section Elements : ";

    // sort(interSection.begin(), interSection.end());

    // for (int i = 0; i < interSection.size(); i++)
    // {
    //     cout << interSection[i] << " ";
    // }

    // Get Union Section
    for (int i = 0; i < lenghtB; i++)
    {
        unionSection.push_back(arrB[i]);
    }

    int occur = 0;
    for (int i = 0; i < lenghtA; i++)
    {

        for (int j = 0; j < lenghtB; j++)
        {
            if (arrA[i] == arrB[j])
            {
                occur++;
            }
        }

        cout << arrA[i] << ". " << occur << endl;
    }

    cout << endl
         << "Union Section Elements : ";
    // sort(unionSection.begin(), unionSection.end());
    for (int i = 0; i < unionSection.size(); i++)
    {
        cout << unionSection[i] << " ";
    }

    return 0;
}
