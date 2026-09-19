#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

int main() {
    int n, item;
    struct node* head = NULL;
    struct node* temp;
    
    printf("Enter No of Nodes :");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter value %d :", i + 1);
        scanf("%d", &item);
        
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = item;
        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp; // Set backward link for initial creation
        }
    }

    // Traverse the doubly linked list before insertion
    printf("Before Insertion Doubly Linked List --> \n");
    temp = head;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Insertion at the beginning
    int first_val;
    printf("\nEnter value to insert at the begin :");
    scanf("%d", &first_val);
    
    struct node *first = (struct node*)malloc(sizeof(struct node));
    first->data = first_val;
    first->prev = NULL;
    first->next = NULL;

    if(head == NULL) {
        head = first;
    } else {
        first->next = head;
        head->prev = first;
        head = first;
    }
    
    printf("After Insertion at Begin Doubly Linked List --> \n");
    temp = head;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Insertion at the last
    int last_val;
    printf("Enter value to insert at the Last :");
    scanf("%d", &last_val);

    struct node *last = (struct node*)malloc(sizeof(struct node));
    last->data = last_val;
    last->prev = NULL;
    last->next = NULL;

    if(head == NULL) {
        head = last;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = last;
        last->prev = temp; // Set backward link for last node
    }

    printf("After Insertion at last Doubly Linked List --> \n");
    temp = head;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Insertion at a specific location
    int pos, insert_val;
    printf("\nEnter position to insert :");
    scanf("%d", &pos);

    printf("Enter value to insert :");
    scanf("%d", &insert_val);

    struct node *insertNode = (struct node *)malloc(sizeof(struct node));
    insertNode->data = insert_val;
    insertNode->prev = NULL;
    insertNode->next = NULL;

    if(pos == 1) {
        // Insert at the very beginning
        if(head != NULL) {
            insertNode->next = head;
            head->prev = insertNode;
        }
        head = insertNode;
    } else {
        temp = head;
        // Traverse to the node just BEFORE the target position (pos - 2 steps from head)
        for(int i = 0; i < pos - 2 && temp != NULL; i++) {
            temp = temp->next;
        }

        if(temp == NULL) {
            printf("Position out of range!\n");
            free(insertNode);
        } else {
            // Correct pointer linking for doubly linked list insertion
            insertNode->next = temp->next;
            insertNode->prev = temp;

            if(temp->next != NULL) {
                temp->next->prev = insertNode;
            }
            temp->next = insertNode;
        }
    }

    printf("After Insertion at specific position Doubly Linked List --> \n");
    temp = head;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}