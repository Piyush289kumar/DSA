/* Q15: Add Number Linked Lists
Difficulty: MediumAccuracy: 34.52%Submissions: 289K+Points: 4

Given two numbers, num1, and num2, represented by linked lists. The task is to return the head of the linked list representing the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

Examples:

Input: num1 = 45 (4->5->null), num2 = 345 (3->4->5->null)
Output:  3->9->0->null

Explanation:
For the given two linked list (4 5) and (3 4 5), after adding the two linked list resultant linked list will be (3 9 0).

Input: num1 = 0063 (0->0->6->3->null), num2 = 07 (0->7->null)
Output: 7->0->null

Explanation:
For the given two linked list (0 0 6 3) and (0 7), after adding the two linked list resultant linked list will be (7 0).

Expected Time Complexity: O(n+m)
Expected Space Complexity: O(max(n,m)) for the resultant list.
*/

#include <iostream>

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

Node *reverseList(Node *head)
{
    if (head == nullptr || head->next == nullptr)
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
void appendAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
Node* addTwoNumber(Node *head1, Node *head2)
{
    Node *first = head1;
    Node *second = head2;
    Node *ansHead = nullptr;
    Node *ansTail = nullptr;
    int carry = 0;
    while (first != nullptr || second != nullptr || carry)
    {
        int val1 = first != nullptr ? first->data : 0;
        int val2 = second != nullptr ? second->data : 0;
        int sum = val1 + val2 + carry;
        int lastDigit = sum % 10;
        appendAtTail(ansHead, ansTail, lastDigit);
        carry = sum / 10;
        if (first != nullptr)
        {
            first = first->next;
        }
        if (second != nullptr)
        {
            second = second->next;
        }
    }
    return ansHead;
}
Node *addTwoLists(Node *num1, Node *num2)
{
    Node *head1 = reverseList(num1);
    Node *head2 = reverseList(num2);
    Node *tempAns = addTwoNumber(head1, head2);
    Node *ans = reverseList(tempAns);
    return ans;
}
int main()
{
    Node *num1 = nullptr;
    Node *num2 = nullptr;
    push(num1, 4);
    push(num1, 5);
    printList(num1);
    push(num2, 3);
    push(num2, 4);
    push(num2, 5);
    printList(num2);
    Node *res = addTwoLists(num1, num2);
    printList(res);
    return 0;
}