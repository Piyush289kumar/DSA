/* Q10: Remove Duplicates from Un-Sorted List
Topics
Companies
Given the head of a unsorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
Example 1:
Input: head = [1,1,2]
Output: [1,2]
Example 2:
Input: head = [1,1,2,3,3]
Output: [1,2,3]
*/
#include <iostream>
#include <unordered_set>
#include <algorithm>
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
    cout << "LIST ==> ";
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
// Logic to remove duplicates from a linked list
ListNode *deleteDuplicates(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    unordered_set<int> seen;
    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr != nullptr)
    {
        if (seen.find(curr->data) != seen.end())
        {
            ListNode *toBeDelete = curr;
            curr = curr->next;
            if (prev != nullptr)
            {
                prev->next = curr;
            }
            else
            {
                prev = curr;
            }
            delete (toBeDelete);
        }
        else
        {
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}
int main()
{
    ListNode *head = nullptr;
    appendNode(head, 1);
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 4);
    appendNode(head, 5);
    appendNode(head, 6);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 1);
    printList(head);
    ListNode *unique = deleteDuplicates(head);
    printList(unique);
    return 1;
}