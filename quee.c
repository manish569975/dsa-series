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

void delete_at_beg()
{

    struct node *p;
    p = head;
    head = head->next;
    head->prev = 0;
    free(p);
}
void delete_at_end()
{
    if (head == 0)
    {
        printf("\ndeletion not possible\n");
    }
    else
    {
        printf("After delete at end\n");
        struct node *p = tail;
        tail = tail->prev;
        tail->next = 0;
        free(p);
    }
}

void delete_at_specific_position()
{
    if (head == 0)
    {
        printf("/n deletion not possible");
    }
    else
    {

        struct node *p = head;
        struct node *q = head->next;
        int i = 1, position;
        printf("enter the position you want to delete the node\n");
        scanf("%d", &position);
        while (i < position - 1)
        {
            p = p->next;
            q = q->next;
            i++;
        }
        p->next = q->next;
        q->next->prev = q->prev;

        free(q);
        printf(" after delete at specific position \n");
    }
}

void delete_after_a_node()
{
    if (head == 0)
    {
        printf("/n deletion not possible");
    }
    else
    {
        struct node *p = head;
        struct node *q = head->next;
        int i = 1, position;
        printf("enter the position  after which you want to delete the node\n");
        scanf("%d", &position);
        while (i < position)
        {
            p = p->next;
            q = q->next;
            i++;
        }
        q->next->prev = q->prev;
        p->next = q->next;

        free(q);
        printf(" after delete after a specific node\n");
    }
}
void main()
{

    create(head);
    display(head);
    delete_at_beg(head);
    printf(" After delete at begining\n");
    display(head);
    delete_at_end(head);
    display(head);
    delete_at_specific_position(head);
    display(head);
    delete_after_a_node(head);
    display(head);
}