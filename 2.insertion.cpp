#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *insertbeginning(struct node *head,int data){
    struct node *ptr = (struct node *)malloc( sizeof(struct node));
    printf("\nInsertion at beginning\n");
    ptr->next=head;
    ptr->data=data;
    head=ptr;
    return head;
}

struct node *insertbetween(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    printf("\nInsertion at index %d\n",index);
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct node *insertionend(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    printf("\ninsertion at the end\n");
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;}
        p->next=ptr;
        ptr->next=NULL;
    
    return head;
}

struct node *insertionafternode(struct node *head,struct node *prevnode,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    printf("\ninsertion after a node\n");
    ptr->data=data;

    ptr->next=prevnode->next;
    prevnode->next=ptr;
    
    return head;
}



void traversal(struct node *ptr){
    
        while(ptr!=NULL){
               


               printf("%d \t " ,ptr->data);
            
         ptr=ptr->next;


        }
    
    }




int main(){ 
    struct node *head;
     struct node *second;
      struct node *third;
    head=(struct node *)malloc(sizeof(struct node));
        second=(struct node *)malloc(sizeof(struct node));
            third=(struct node *)malloc(sizeof(struct node));
    head->data=55;
    head->next=second;

    second->data=882;
    second->next=third;

    third->data=89;
    third->next=NULL;
    traversal(head);
    head=insertbeginning(head,78);
    traversal(head);
    head=insertbetween(head,56,1);
    traversal(head);
    head=insertionend(head,90);
    traversal(head);
    head=insertionafternode(head,second,900);
    traversal(head);

    }

