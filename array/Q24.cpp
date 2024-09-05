/* Q24. Merge Sorted Array. */

#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted arrays into a single sorted array
vector<int> merge(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> nums3; // Resultant array to store the merged elements
    int i = 0;         // Pointer for the first array
    int j = 0;         // Pointer for the second array

    // Traverse both arrays until we reach the end of one of them
    while (i < nums1.size() && j < nums2.size())
    {
        // Compare current elements of both arrays and add the smaller one to nums3
        if (nums1[i] < nums2[j])
        {
            nums3.push_back(nums1[i]);
            i++; // Move pointer for nums1
        }
        // If nums2 element is smaller, add it to nums3
        else
        {
            nums3.push_back(nums2[j]);
            j++; // Move pointer for nums2
        }
    }

    // Copy the remaining elements from nums1, if any
    if (i < nums1.size())
    {
        for (int k = i; k < nums1.size(); k++)
        {
            nums3.push_back(nums1[k]);
        }
    }

    // Copy the remaining elements from nums2, if any
    if (j < nums2.size())
    {
        for (int k = j; k < nums2.size(); k++)
        {
            nums3.push_back(nums2[k]);
        }
    }

    return nums3; // Return the merged sorted array
}

int main()
{
    // Example sorted arrays
    vector<int> nums1 = {1, 3, 5, 7, 9};
    vector<int> nums2 = {2, 4, 6, 8};

    // Call the merge function to merge nums1 and nums2
    vector<int> merge_arr = merge(nums1, nums2);

    // Output the merged sorted array
    cout << endl
         << "Merged Sorted Array --> ";
    for (auto idx : merge_arr)
    {
        cout << idx << " "; // Print each element of the merged array
    }
}
