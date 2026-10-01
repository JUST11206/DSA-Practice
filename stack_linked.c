#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createLL(int n){
    int value;
    struct node *head = NULL; // Fixed: head must be a pointer
    struct node *temp = NULL;

    for (int i = 0; i < n; i++) {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        
        if (newNode == NULL) {
            printf("Overflow !\n");
            exit(0);
        }
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        // Data and next pointer should be assigned for EVERY new node
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode; // If list is empty, make this the head
        } else {
            // Otherwise, traverse to the last node
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode; // Attach the new node at the end
        }
    }
    return head;
}


void display(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


void deleteLL(struct node *head,int pos){
    struct node *temp = head;
    struct node *del;

    if(head == NULL)
    {
        printf("Underflow!\n");
        exit(0);
    }

    if(pos == 1){
        del = head;
        head = head->next;
        free(del);
    }
    else{
        int i =0;
        
    while(temp->next != NULL && i < pos-1 )
        {
            temp = temp->next;
            i++;
        }

        del = temp->next;
        temp->next = del->next;
        free(del);
}

}

int main() {
    printf("Welcome to first create LL function !\n");
    int n,pos;
    printf("Enter how many nodes you want to create: ");
    scanf("%d", &n);
    // Function calling
    struct node *head = createLL(n);
    printf("Linked List :");
    display(head);

    printf("Enter position :");
    scanf("%d",&pos);
    deleteLL(head,pos);
    
    printf("Linked List After :");
    display(head);
    return 0;
}