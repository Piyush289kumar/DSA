// Question 1: Find Length of a Linked List (Iterative and Recursive)

#include <stdio.h> // header files
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *prev, *next;
};

struct node *head = 0;
struct node *tail = 0;

void push(int elementAsParam)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = elementAsParam;
    newnode->prev = newnode->next = 0;

    if (head == 0)
    {
        head = tail = newnode;
        head->next = newnode;
        head->prev = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        tail->next = head;
        head->prev = tail;
    }
}

void display()
{
    struct node *tmp = head;
    while (tmp->next != head)
    {
        printf("\nElement is : %d", tmp->data);
        tmp = tmp->next;
    }
    printf("\nElement is : %d", tmp->data);
}

int main()
{
    push(3);
    push(4);
    push(6);
    push(8);
    display();
    return 0;
}