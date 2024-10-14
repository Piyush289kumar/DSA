/*Q5: Reverse a Circular Linked List */

#include <iostream>

using namespace std;

struct ListNode
{
    int data;
    ListNode *nxt;
};

void append(ListNode *&head, int data)
{

    ListNode *newNode = new ListNode();

    newNode->data = data;

    if (head == nullptr)
    {
        head = newNode;
        newNode->nxt = head;
        return;
    }

    ListNode *tail = head;

    while (tail->nxt != head)
    {
        tail = tail->nxt;
    }

    tail->nxt = newNode;
    newNode->nxt = head;

    return;
}

void printList(ListNode *head)
{
    ListNode *it = head;

    cout << "Circular Linked List ==> ";

    do
    {
        cout << it->data << " ";
        it = it->nxt;
    } while (it != head);

    return;
}

int main()
{

    ListNode *head = nullptr;

    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    append(head, 6);
    append(head, 7);
    append(head, 8);
    append(head, 9);
    printList(head);

    return 1;
}