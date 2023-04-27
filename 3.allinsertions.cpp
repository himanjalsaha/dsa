#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node * head = NULL;

void traversal(struct node *ptr){
    
        while(ptr!=NULL){
               


               printf("%d \t " ,ptr->data);
            
         ptr=ptr->next;


        }
    
    }


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

int main() {
    int choice,n,index;

    do {
        printf("\nMain Menu\n");
        printf("1. insert beginning\n");
        printf("2. traverse\n");
        printf("3. insert end\n");
        printf("4. insert at index\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
            printf("enter data:");
            scanf("%d",&n);
            head=insertbeginning(head,n);        
                break;
            case 2:
                traversal(head);
                break;
            case 3:
                 printf("enter data:");
            scanf("%d",&n);
            head=insertionend(head,n);  
                break;
            case 4:
                 printf("enter data:");
                 scanf("%d",&n);
                 printf("enter index:");
                 scanf("%d",&index);
            head=insertbetween(head,n,index);  
                break;    
            case 5:
                printf("Exiting program...");
                break;
            default:
                printf("Invalid choice. Please try again.");
        }
    } while (choice != 5);

    return 0;
}