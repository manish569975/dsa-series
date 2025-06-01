#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("enter Element %d\n:", ptr->data);
        ptr = ptr->next;
    }

                        //   eletion at beg


}struct node* deletion_at_beg(struct node  * head){
struct node* ptr=head;
head= head->next;
free(ptr);
return head;                  
}                            


                                      //eletion at spacific index



struct node* del_at_index(struct node * head,int index)
{
    struct node* p=head;
    struct node* q=head->next;
    
     for(int i=0;i<index-1;i++)
     {
        p=p->next;
        q=q->next;
    }
  p->next=q->next;
  free(q);
  return head;
  
}
                                   // deleion at end

struct node* del_at_end(struct node *head)     
{
    struct node* p=head;
    struct node* q=head->next;
    while(q->next!=NULL){
          p=p->next;
          q=q->next;

    }
    p->next=NULL;
    free(q);
    return head;
}
// }                       value
      
      struct node* del_at_value(struct node *head,int value)     
{
    struct node* p=head;
    struct node* q=head->next;
    while(q->data!=value && q->next!=NULL){
          p=p->next;
          q=q->next;

    }
    if(q->data==value){
p->next=q->next;
free(q);
return head;
    }

    return head;
}                    
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data=77;
    third->next=fourth;

    fourth->data = 11;
    fourth->next = NULL;
    // traversal(head);
    // head=deletion_at_beg(head);
    // head=del_at_index(head,3);
    // head= del_at_end(head);
    head= del_at_value(head,77);
    traversal(head);
    return 0;
}
