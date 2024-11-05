/* Q14: Palindrome Linked List
Difficulty: MediumAccuracy: 41.48%Submissions: 344K+Points: 4

Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.

Examples:

Input: LinkedList: 1->2->1->1->2->1
Output: true
Explanation: The given linked list is 1->2->1->1->2->1 , which is a palindrome and Hence, the output is true.

Input: LinkedList: 1->2->3->4
Output: false
Explanation: The given linked list is 1->2->3->4, which is not a palindrome and Hence, the output is false.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void push(Node *&head, int data)
{
    Node *newNode = new Node();

    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *tail = head;

    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    tail->next = newNode;
    return;
}

void printList(Node *head)
{

    cout << endl
         << endl
         << "LIST ==> ";
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *findMiddleOfList(Node *&head)
{

    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head;

    // Move `slow` by 1 step and `fast` by 2 steps
    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node *reverseList(Node *&head)
{
    if (head == nullptr)
    {
        return head;
    }

    Node *prev = nullptr;
    Node *curr = head;
    Node *next = nullptr;

    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node *&head)
{

    if (head == nullptr || head->next == nullptr)
    {
        return true;
    }

    Node *middle = findMiddleOfList(head);

    Node *temp = middle->next;
    middle->next = reverseList(temp);

    Node *head1 = head;
    Node *head2 = middle->next;
    bool isPalindrome = true;

    // Debug print statements to show both halves
    cout << "\nComparing the list halves:" << endl;

    while (head2 != nullptr)
    {
        cout << "HEAD 1: " << head1->data << "  ";
        cout << "HEAD 2: " << head2->data << endl;

        if (head1->data != head2->data)
        {
            isPalindrome = false;
            cout << "\nMismatch found, not a palindrome.\n";
            break;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    // Restore the list by reversing the second half back
    middle->next = reverseList(middle->next);

    return isPalindrome;
}

int main()
{
    Node *head = nullptr;

    // Test case: Palindromic list
    push(head, 1);
    push(head, 2);
    push(head, 3);

    push(head, 4);
    push(head, 2);
    push(head, 1);

    printList(head);
    cout << endl
         << endl
         << "isPalindrome => " << (isPalindrome(head) ? "TRUE" : "FALSE") << endl;
    printList(head); // Should print the restored list

    return 0;
}