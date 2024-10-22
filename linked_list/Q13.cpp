/* Q13: 21. Merge Two Sorted Lists
Easy
Topics
Companies

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Example 1:

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:

Input: list1 = [], list2 = []
Output: []

Example 3:

Input: list1 = [], list2 = [0]
Output: [0]



Constraints:

    The number of nodes in both lists is in the range [0, 50].
    -100 <= Node.val <= 100
    Both list1 and list2 are sorted in non-decreasing order.

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
    }
    else
    {
        ListNode *lastNode = head;
        while (lastNode->next != nullptr)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}

void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode *solve(ListNode *list1, ListNode *list2)
{

    if (list1->next == nullptr)
    {
        list1->next = list2;
        return list1;
    }

    // if (list2->next == nullptr)
    // {
    //     list2->next = list1;
    //     return list2;
    // }

    ListNode *curr1 = list1;
    ListNode *next1 = curr1->next;

    ListNode *curr2 = list2;
    ListNode *next2 = curr2->next;

    while (next1 != nullptr && curr2 != nullptr)
    {
        if ((curr1->data <= curr2->data) && (curr2->data <= next1->data))
        {
            curr1->next = curr2;
            next2 = curr2->next;

            curr2->next = next1;

            curr1 = curr1->next;
            curr2 = next2;
        }
        else
        {
            curr1 = curr1->next;
            next1 = next1->next;
        }

        if (next1 == nullptr)
        {
            curr1->next = curr2;
            return list1;
        }
    }

    return list1;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

    if (list1 == nullptr)
    {
        return list2;
    }

    if (list2 == nullptr)
    {
        return list1;
    }

    ListNode *ans = nullptr;
    if (list1->data <= list2->data)
    {
        ans = solve(list1, list2);
    }
    else
    {
        ans = solve(list2, list1);
    }

    return ans;
}

int main()
{

    // ex1: list1 = [1,2,4], list2 = [1,3,4]
    // ex2: list1 = [5], list2 = [1,2,4]

    ListNode *list1 = nullptr;
    ListNode *list2 = nullptr;

    append(list1, 1);
    append(list1, 2);
    append(list1, 4);

    append(list2, 1);
    append(list2, 2);
    append(list2, 4);


    printList(list1);
    printList(list2);

    ListNode *res = mergeTwoLists(list1, list2);

    cout << endl
         << "RESPONSE ==> ";

    printList(res);

    return 1;
}
