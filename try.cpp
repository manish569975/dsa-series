#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};

void insert_at_beginning(struct node **head,int item)
{
    struct node *new_node;
    new_node = (struct node *) malloc (sizeof(struct node));
    new_node->info = item;
    
    if(head == NULL)
    {
        *head = new_node;
        new_node->next = NULL;
    }
    else
    {   
        new_node->next = *head;
        *head = new_node;
    }
}
void traverse(struct node *head)
{
    struct node*temp = head;
    while(temp->next!=head)
    {
        printf("%d ",temp->info);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;
    insert_at_beginning(&head,2);
    insert_at_beginning(&head,3);
    insert_at_beginning(&head,9);
    insert_at_beginning(&head,4);
    insert_at_beginning(&head,5);
    insert_at_beginning(&head,6);
    insert_at_beginning(&head,7);
    insert_at_beginning(&head,8);
    traverse(head);
}