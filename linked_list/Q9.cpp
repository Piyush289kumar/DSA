/* Q9: 83. Remove Duplicates from Sorted List
Easy
Topics
Companies
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
Example 1:
Input: head = [1,1,2]
Output: [1,2]
Example 2:
Input: head = [1,1,2,3,3]
Output: [1,2,3]
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
    ListNode *currNode = head;
    while (currNode != nullptr)
    {
        if ((currNode->next != nullptr) && (currNode->data == currNode->next->data))
        {
            ListNode *next_next = currNode->next->next;
            ListNode *toBeDelete = currNode->next;
            delete (toBeDelete);
            currNode->next = next_next;
        }
        else
        {
            currNode = currNode->next;
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
    appendNode(head, 3);
    printList(head);
    ListNode *unique = deleteDuplicates(head);
    printList(unique);
    return 1;
}