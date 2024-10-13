/* Q3: 25. Reverse Nodes in k-Group
Hard
Topics
Companies

Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.



Example 1:

Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]

Example 2:

Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]



Constraints:

    The number of nodes in the list is n.
    1 <= k <= n <= 5000
    0 <= Node.val <= 1000
*/

#include <iostream>

using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};

void append(ListNode *&head, int data)
{
    ListNode *newNode = new ListNode();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    ListNode *tail = head;

    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    tail->next = newNode;

    return;
}

void printList(ListNode *head)
{
    ListNode *ptr = head;

    cout << "LINKED LIST => ";
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    return;
}

bool hasKNodes(ListNode *head, int k)
{
    int count = 0;
    ListNode *ptr = head;

    while (ptr != nullptr && count < k)
    {
        ptr = ptr->next;
        count++;
    }

    return (k == count);
}

ListNode *reverseKGroup(ListNode *&head, int k)
{
    // Check if we have at least k nodes remaining
    if (head == nullptr || !hasKNodes(head, k))
    {
        return head;
    }

    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *next = nullptr;
    int count = 0;

    while (curr != nullptr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

        count++;
    }

    if (next != nullptr)
    {
        head->next = reverseKGroup(next, k);
    }

    return prev;
}

int main()
{
    ListNode *head = nullptr;

    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    printList(head);

    ListNode *ansPtr = reverseKGroup(head, 3);
    printList(ansPtr);

    return 1;
}