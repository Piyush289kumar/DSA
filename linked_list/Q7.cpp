/* Q7: 142. Linked List Cycle II
Medium
Topics
Companies

Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.


Example 1:

Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.

Example 2:

Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.

Example 3:

Input: head = [1], pos = -1
Output: no cycle
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

void printList(ListNode *head)
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
ListNode *detectCycle(ListNode *head)
{
    /* Algo
        1. First Find intersection where slow and fast pointer meet
        2. After that slow will start from head and slow and fast both increment by 1
        3. Where slow and fast both meet that will be the start of cycle
    */

    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
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
        return nullptr;
    }

    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

int main()
{
    // Input: head = [3,2,0,-4], pos = 1

    ListNode *head = nullptr;
    appendNode(head, 3);
    appendNode(head, 2);
    appendNode(head, 0);
    appendNodeForLoop(head, -4);

    ListNode *res = detectCycle(head);
    if (res != nullptr)
    {
        std::cout << "Cycle detected at node " << res->data << std::endl;
    }
    else
    {
        std::cout << "Cycle is Not Present " << res->data << std::endl;
    }

    // printList(head);

    return 1;
}