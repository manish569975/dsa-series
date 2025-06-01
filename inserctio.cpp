#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node* ptr)
{
    while (ptr != NULL)
    {
        printf("enter Element %d\n:", ptr->data);
        ptr = ptr->next;
    }
}
                            //   at begninig


struct node* insert_at_beg(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
                        //  insertion a spisific pposition 

struct node* insert_at_index(struct node *head ,int data, int index){
struct node* ptr=(struct node*)malloc(sizeof(struct node));
struct node*  p=head;
int i=0;

while(i!=index-1){
p=p->next;
i++;
}
ptr->next=p->next;
p->next=ptr;
ptr->data=data;
return head;

                        //   after a node 
}
struct node* after_at_node(struct node *head ,struct node *prev ,int data )   {
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prev->next;
     prev->next=ptr;
     return head;   
}

                    //  at end 

struct node* innsetion_at_end(struct node *head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p =head;
    while( ptr->next!=NULL){
      p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 11;
    third->next = NULL;
    traversal(head);

    // printf("enter new element%d");
    // head = insert_at_beg(head, 69);


    // traversal(head);
// head = insert_at_beg(head, 80);
// head = insert_at_beg(head, 90);


// head = insert_at_index(head, 89,2);


//  head = after_at_node(head , second,87);


 head=innsetion_at_end(head,90);

 
traversal(head);


    return 0;
}
