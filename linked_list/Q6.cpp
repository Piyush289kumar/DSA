/* Q6: 141. Linked List Cycle

=========================================
Algo : Floyd Cycle Detection
=========================================

Companies

Easy

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.



Example 1:

Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:

Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

Example 3:

Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.



Constraints:

  The number of the nodes in the list is in the range [0, 104].
  -105 <= Node.val <= 105
  pos is -1 or a valid index in the linked-list.

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

void appendCycleNode(ListNode *&head, int data)
{

    ListNode *newNode = new ListNode();
    newNode->data = data;
    newNode->next = head->next;

    ListNode *tail = head;

    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    tail->next = newNode;

    return;
}

void display(ListNode *head)
{
    ListNode *temp = head;

    cout << "LINKED LIST ==> ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return;
}

// Logic

// Algo : Floyd Cycle Detection

bool hasCycle(ListNode *head)
{
    if (head == nullptr)
    {
        return false;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (slow != nullptr && fast != nullptr)
    {
        slow = slow->next;
        fast = fast->next;

        if (fast != nullptr)
        {
            fast = fast->next;
        }
        else
        {
            return false;
        }

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    ListNode *head = nullptr;

    append(head, 3);
    append(head, 2);
    append(head, 0);
    append(head, 4);
    // appendCycleNode(head, -4);

    // display(head);

    cout << (hasCycle(head) ? "TRUE" : "FALSE");

    return 1;
}