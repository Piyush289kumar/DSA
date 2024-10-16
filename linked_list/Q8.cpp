/* Q8: Remove loop in Linked List
Difficulty: Medium
Accuracy: 27.66%
Submissions: 469K+
Points: 4

Given the head of a linked list that may contain a loop.  A loop means that the last node of the linked list is connected back to a node in the same list.  So if the next of the previous node is null. then there is no loop.  Remove the loop from the linked list, if it is present (we mainly need to make the next of the last node null). Otherwise, keep the linked list as it is.

Note: Given an integer, pos (1 based index)  Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.

The generated output will be true if your submitted code is correct, otherwise, false.

Examples:

Input: Linked list: 1->3->4, pos = 2
Output: true
Explanation: The linked list looks like

A loop is present. If you remove it successfully, the answer will be true.

Input: Linked list: 1->8->3->4, pos = 0
Output: true
Explanation:

The Linked list does not contains any loop.

Input: Linked list: 1->2->3->4, pos = 1
Output: true
Explanation: The linked list looks like

A loop is present. If you remove it successfully, the answer will be true.

Expected Time Complexity: O(n)
Expected Space Complexity: O(1)
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

void appendNodeForLoop(ListNode *&head, int data)
{

    // 1. Create Node and append to the end of the list and next pointer will be point to head->next (second node)

    ListNode *tail = head;

    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    ListNode *newNode = new ListNode();
    newNode->data = data;
    newNode->next = head;
    tail->next = newNode;
    return;
}

void printList(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

// Main Logic
void removeLoop(ListNode *&head)
{
    /* Algo
        1. First Find intersection where slow and fast pointer meet
        2. After that slow will start from head and slow and fast both increment by 1
        3. Where slow and fast both meet that will be the start of cycle
        4. Use Prev Pointer to find the start - 1  of cycle
        5. Prev = Prev->next = nullptr;
    */

    if (head == nullptr || head->next == nullptr)
    {
        return;
    }

    // Step 1: Find intersection of slow and fast pointer
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            break;
        }
    }

    if (fast == nullptr || fast->next == nullptr)
    {
        return;
    }

    slow = head;
    ListNode *prev = nullptr;

    // If the loop starts at the head
    if (slow == fast)
    {
        while (fast->next != slow)
        {
            fast = fast->next;
        }
    }
    else
    {
        // Step 2: Find the start of cycle
        while (slow != fast)
        {
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
    }

    if (prev != nullptr)
    {
        prev->next = nullptr;
    }
    else
    {
        // In case the loop starts at the head
        fast->next = nullptr;
    }
    return;
}

int main()
{
    // Input: head = [3,2,0,-4], pos = 1

    ListNode *head = nullptr;
    appendNode(head, 3);
    appendNode(head, 2);
    appendNode(head, 0);
    appendNodeForLoop(head, -4);

    removeLoop(head);

    printList(head);

    return 1;
}