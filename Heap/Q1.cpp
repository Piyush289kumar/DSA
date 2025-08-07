#include <bits/stdc++.h>
using namespace std;

class Heap
{
private:
    vector<int> nums;
    int size;

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
    return 0;
}