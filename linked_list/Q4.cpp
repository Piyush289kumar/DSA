/* Q4: Check If Circular Linked List
Difficulty: EasyAccuracy: 54.26%Submissions: 164K+Points: 2

Given the head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it is not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered circular.

Note: The linked list does not contain any inner loop.

Examples:

Note: In the input format, k = 1 indicates the presence of a cycle; otherwise, k = 0, followed by the linked list values on a new line.

Input: k=1, LinkedList: 2->4->6->7->5

Output: true
Explanation: As shown in figure the first and last node is connected, i.e. 5 --> 2

Input: k=0, LinkedList: 2->4->6->7->5->1

Output: false
Explanation: As shown in figure this is not a circular linked list.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
0 <= number of nodes <= 100
1 <= node -> data <= 104

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
    newNode->next = head;

    if (head == nullptr)
    {
        head = newNode;
        newNode->next = head;
        return;
    }

    ListNode *tail = head;

    while (tail->next != head)
    {
        tail = tail->next;
    }

    tail->next = newNode;

    return;
}

void printList(ListNode *head)
{
    ListNode *ptr = head;

    if (ptr == nullptr)
    {
        cout << "LINKED LIST IS EMPTY();" << endl;
    }

    cout << "LINKED LIST => ";

    do
    {
        cout << ptr->data << " ";

        ptr = ptr->next;
    } while (ptr != head);

    cout
        << endl;

    return;
}

bool isCircular(ListNode *head)
{
    if (head == nullptr)
    {
        return true;
    }

    ListNode *it = head->next;

    while (it && it != head)
    {
        it = it->next;
    }

    return (it == head);
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

    cout << (isCircular(head) ? "TRUE" : "FALSE");

    return 1;
}