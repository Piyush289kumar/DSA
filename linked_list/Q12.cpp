/* Q12: Sort a linked list of 0s, 1s and 2s
Difficulty: EasyAccuracy: 60.75%Submissions: 203K+Points: 2

Given a linked list where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to the head side, 2s at the end of the linked list, and 1s in the middle of 0s and 2s.

Examples:

Input: LinkedList: 1->2->2->1->2->0->2->2
Output: 0->1->1->2->2->2->2->2
Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between.


Input: LinkedList: 2->2->0->1
Output: 0->1->2->2
Explanation: After arranging all the 0s,1s and 2s in the given format, the output will be 0 1 2 2.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
1 <= no. of nodes <= 106
0 <= node->data <= 2
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

    cout << endl
         << endl
         << "LIST ==> ";

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return;
}

ListNode *sortList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    ListNode *tmp = head;
    while (tmp != nullptr)
    {
        if (tmp->data == 0)
        {
            zeroCount++;
        }
        else if (tmp->data == 1)
        {
            oneCount++;
        }
        else if (tmp->data == 2)
        {
            twoCount++;
        }
        tmp = tmp->next;
    }

    tmp = head;
    while (tmp != nullptr)
    {
        if (zeroCount > 0)
        {
            tmp->data = 0;
            zeroCount--;
        }
        else if (oneCount > 0)
        {
            tmp->data = 1;
            oneCount--;
        }
        else if (twoCount > 0)
        {
            tmp->data = 2;
            twoCount--;
        }
        tmp = tmp->next;
    }

    return head;
}

int main()
{
    ListNode *head = nullptr;

    append(head, 1);
    append(head, 0);
    append(head, 2);
    append(head, 1);
    append(head, 2);

    printList(head);

    ListNode *res = sortList(head);

    printList(res);

    return 1;
}