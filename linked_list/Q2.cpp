/* Q2: 876. Middle of the Linked List
Easy
Topics
Companies

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.



Example 1:

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Example 2:

Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

*/

#include <iostream>

using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};

void appendNode(ListNode *&head, int data)
{
    ListNode *newNode = new ListNode();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    ListNode *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return;
}

void printNode(ListNode *head)
{
    cout << "Linked List : ";

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// Middle Of A Linked List

ListNode *middleNode(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    ListNode *i = head;
    ListNode *j = head;

    while (j != nullptr && j->next != nullptr)
    {
        i = i->next;
        j = j->next;

        if (j->next != nullptr)
        {
            j = j->next;
        }
    }

    return i;
}

int main()
{
    ListNode *head = nullptr;

    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 4);
    appendNode(head, 5);
    appendNode(head, 6);

    printNode(head);

    middleNode(head);

    return 1;
}