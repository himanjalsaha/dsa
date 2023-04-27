#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr){
    printf("--traversing--\n");
        while(ptr!=NULL){
               


               printf("%d \t \n" ,ptr->data);
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


}