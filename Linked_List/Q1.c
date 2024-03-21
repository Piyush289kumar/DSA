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
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = elementAsParam;

    struct node *temp = head;

    if (head == 0)
    {
        head = newnode;
    }

    while (temp->next != 0)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

void display()
{
    struct node *tmp = head;
    while (tmp == 0)
    {
        printf("\nElement is : %d", tmp->data);
        tmp = tmp->next;
    }
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