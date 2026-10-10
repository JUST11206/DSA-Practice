#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
        struct node*next;
};

struct node *createLL(int size){

        int i,item;
        struct node * temp,*head = NULL;

        for(i=0;i<size;i++){
                struct node *newNode = malloc(sizeof(struct node));
                //edge cases
                if(newNode == NULL){
                        printf("Overflow !");
 //                       return;
                }
                printf("Enter value %d :",i+1);
                scanf("%d",&item);
                newNode->data = item;
                newNode->next = NULL;
                //edge cases
                if(head==NULL){
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
        return head;
}
//swap
struct node *swap(struct node *first,struct node *second){
        struct node *temp;
        first->next = second->next;
        second->next = first;
        return second;
}

//sorting Func()

struct node *sortingLL(struct node *head){
        struct node * temp;
        
}

//main func
void main(){
//swap test
        struct node *ptr, *first = malloc(sizeof(struct node ));
        struct node *second = malloc(sizeof(struct node ));

        first->data = 10;
        second->data = 5;

        first->next = second;
        second->next = NULL;

        ptr = first;
        while(ptr != NULL)
                {
                printf("%d->",ptr->data);
        ptr = ptr->next;
}
        printf("NULL\n");

       ptr =  swap(first,second);
        
while(ptr != NULL)
                {
                printf("%d->",ptr->data);
        ptr = ptr->next;
}
        printf("NULL\n");
        
        // int n;
        // printf("Enter number of Nodes :");
        // scanf("%d",&n);
        // struct node *temp = createLL(n);

        // while(temp != NULL)
        //         {
        //                 printf("%d->",temp->data);
        //                 temp = temp->next;
                        
        //         }
        
        // printf("NULL\n");
}