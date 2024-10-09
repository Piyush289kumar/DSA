/* Q1: 206. Reverse Linked List

Easy

Given the head of a singly linked list, reverse the list, and return the reversed list.

Example 1:

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:

Input: head = [1,2]
Output: [2,1]

Example 3:

Input: head = []
Output: []

Constraints:

    The number of nodes in the list is the range [0, 5000].
    -5000 <= Node.val <= 5000

Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?
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

ListNode *reverseList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *fwd = nullptr;

    while (curr != nullptr)
    {
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }

    head = prev;

    return head;
}

int main()
{

    ListNode *head = nullptr;

    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);

    display(head);
    
    ListNode *newHead = reverseList(head);
    display(newHead);

    return 1;
}