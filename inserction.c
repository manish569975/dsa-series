#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
    struct node *prev;
};

struct node *head, *tail;
void create()
{
    struct node *newnode;
    head = 0;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data for the newnode\n");
        scanf("%d", &newnode->data); // we also write (*newnode).data instead 0f newnode->data  ----
        newnode->prev = 0;
        newnode->next = 0;
        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("do you want to continue\n");
        scanf("%d", &choice);
    }
}
void display()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("ELEMENTS : %d\n", temp->data);
        temp = temp->next;
    }                             
}
void insert_at_beg()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of node to be inserted\n");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}                              
void insert_at_end()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of node to be inserted at end \n");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_specific_position()
{
    struct node *newnode;
    struct node *p = head;
    int i = 1, pos;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of node to be inserted at specific position \n");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    printf("\nenter the position you want to insert the new node\n");
    scanf("%d", &pos);
    while (i < pos - 1)
    {
        p = p->next;
        i++;
    }
    newnode->next = p->next;
    p->next->prev = newnode;
    p->next = newnode;
    newnode->prev = p;
}

void insert_after_a_node()
{
    struct node *newnode;
    struct node *p = head;
    int i = 1, pos;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of node to be inserted after a node  \n");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    printf("\nenter the position you want to insert the new node\n");
    scanf("%d", &pos);
    while (i < pos)
    {
        p = p->next;
        i++;
    }
    newnode->next = p->next;
    p->next->prev = newnode;
    p->next = newnode;
    newnode->prev = p;
}

void main()
{

    create(head);
    display(head);
    insert_at_beg(head);
    printf("\nafter insertion at begining\n");
    display(head);
    insert_at_end(head);
    printf("\nafter insertion at end\n");
    display(head);
    insert_at_specific_position(head);
    printf("\n after a specific position\n");
    display(head);
    insert_after_a_node(head);
    printf("\n after a node\n");
    display(head);
}
