#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next; 
};
void appendAtStart(Node *&head, int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void print(Node *head){
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }    
}

int main(){
    Node *head = new Node();
    head->next = nullptr;
    appendAtStart(head, 1);
    appendAtStart(head, 2);
    appendAtStart(head, 3);
    appendAtStart(head, 4);
    appendAtStart(head, 5);

    print(head);
    return 0;
}