#include <bits/stdc++.h>
using namespace std;

class Heap
{
private:
    vector<int> nums;
    int size;

    void heapify(int i)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= size && nums[largest] < nums[left])
        {
            largest = left;
        }
        if (right <= size && nums[largest] < nums[right])
        {
            largest = right;
        }

        if (largest != i)
        {
            swap(nums[i], nums[largest]);
            heapify(largest);
        }
    }

public:
    Heap()
    {
        nums.push_back(-1);
        size = 0;
    }

    void insert(int data)
    {
        nums.push_back(data);
        size++;

        int idx = size;
        int parentNode = idx / 2;
        while (idx < size)
        {
            if (nums[parentNode] < nums[idx])
            {
                swap(nums[parentNode], nums[idx]);
                idx = parentNode;
            }
            else
            {
                break;
            }
        }
    }

    void deleteNode()
    {
        if (size == 0)
            return;
        // 1. swap last left & root node
        nums[1] = nums[size];
        nums.pop_back();
        size--;

        // 2. Verify Heap
        heapify(1);
    }

    void print()
    {
        cout << "HEAP : " << endl;
        for (auto n : nums)
            cout << n << " ";
        cout << endl
             << endl;
    }
};

int main()
{
    Heap h;

    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(30);
    h.insert(20);
    h.insert(10);

    h.print();

    h.deleteNode();
    h.print();

    return 0;
}