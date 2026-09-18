#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*next;
    
};

int main()
{
    
    int n,val;
    struct node * head=NULL;
    struct node*temp,*del;
    
    printf("Enter number of nodes :");
    scanf("%d",&n);

        for(int i=0;i<n;i++){
            printf("Enter value %d :",i+1);
            scanf("%d",&val);

        struct node * newNode = malloc(sizeof(struct node));
        newNode->data = val;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
printf("\nSingly Linked List \n");
    temp = head;
    while(temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
    printf("NULL\n");

//Now deletion at specific location 

    int pos;
    printf("\nEnter position to delete :");
    scanf("%d",&pos);


    if(pos == 1){
        del = head;
        head = head->next;
        free(del);
            
    }
    
    temp = head;
    for(int i=0;i<pos-1-1 && temp !=NULL;i++){
        temp = temp->next;    
    }

    // printf("\n %d",temp->data);  //temp == pos , Let suppose pos is 2 
    //arrange 
    del = temp->next; // 3
    temp->next = del->next;
    free(del);

printf("\nAfter deletion linked List ");
 temp = head;
    while(temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
    printf("NULL");
    
    return 0;
    
}
