/* Q20: Quick Sort
Difficulty: MediumAccuracy: 55.23%Submissions: 232K+Points: 4

Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).

Note: The low and high are inclusive.

Implement the partition() and quickSort() functions to sort the array.

Example 1:

Input:
N = 5
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9

Example 2:

Input:
N = 9
arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
Output:
1 1 2 3 4 6 7 9 10

Your Task:
You don't need to read input or print anything. Your task is to complete the functions partition()  and quickSort() which takes the array arr[], low and high as input parameters and partitions the array. Consider the last element as the pivot such that all the elements less than(or equal to) the pivot lie before it and the elements greater than it lie after the pivot.

Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(logN)
*/

#include <iostream>

using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i++], arr[j]);
        }
    }

    swap(arr[i], arr[high]);
    return i;
}
// Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int pivot = partition(arr, low, high);

    // Left Part
    quickSort(arr, low, pivot - 1);

    // Right Part
    quickSort(arr, pivot + 1, high);
}

int main()
{

    int arr[] = {342, 949, 15, 103, 358, 491, 505, 51, 449, 518, 96, 440, 699, 77, 978, 320, 387, 890, 577, 140, 554, 682, 975, 43, 85, 415, 72, 78, 584, 259, 347, 112, 185, 114, 924, 778, 758, 522, 521, 308, 261, 55, 407, 560, 518, 991, 136, 313, 542, 220, 923, 593, 739, 680, 273, 127, 943, 490, 535, 831, 147, 854, 365, 756, 465, 659, 962, 81, 430, 750, 729, 93, 114, 37, 396, 460, 557, 589, 795, 770, 224, 380, 849, 122, 133, 835};

    int low = 0;
    int high = (sizeof(arr) / sizeof(arr[0])) - 1;
    quickSort(arr, low, high);

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 1;
}
