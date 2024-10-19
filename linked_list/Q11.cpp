/* Q11: Split Circular Linked List Into Equaly Two Parts.

Example :
    intput: 1 -> 2 -> 3 -> 4 -> 5 -> 6;
    output: 1 -> 2 -> 3 and 4 -> 5 -> 6;
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
    newNode->next = head;
    return;
}

void printList(ListNode *head)
{
    ListNode *ptr = head;
    cout << "LIST ==> ";
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
}

int getLength(ListNode *head)
{
    if (head == nullptr)
    {
        return 0;
    }
    if (head->next == head)
    {
        return 1;
    }

    ListNode *ptr = head;
    int count = 0;
    do
    {
        count++;
        ptr = ptr->next;
    } while (ptr != head);

    return count;
}

// Logic to Split linked list Into Equaly Two Parts

ListNode *splitLinkedList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr || head->next == head)
    {
        return head;
    }

    int lengthOfList = getLength(head);

    cout << endl
         << "LENGTH: " << lengthOfList << endl;

    ListNode *headOfPartOne = head;
    ListNode *tailOfPartOne = head;

    for (int i = 1; i < lengthOfList / 2; i++)
    {
        tailOfPartOne = tailOfPartOne->next;
    }

    // Second Part
    ListNode *headOfPartTwo = tailOfPartOne->next;
    ListNode *tailOfPartTwo = tailOfPartOne->next;

    while (tailOfPartTwo->next != head)
    {
        tailOfPartTwo = tailOfPartTwo->next;
    }

    tailOfPartOne->next = headOfPartOne;
    tailOfPartTwo->next = headOfPartTwo;

    cout << endl;
    cout << endl;

    ListNode *ptrOne = head;
    cout << "Part One ==> ";
    printList(headOfPartOne);

    cout << endl;
    cout << "Part Two ==> ";

    printList(headOfPartTwo);

    return head;
}
int main()
{
    ListNode *head = nullptr;
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 4);
    appendNode(head, 5);
    appendNode(head, 6);
    printList(head);
    ListNode *unique = splitLinkedList(head);
    // printList(unique);
    return 1;
}