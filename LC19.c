/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

 struct ListNode *del , * temp = NULL;
 int count = 0;
    if(head == NULL){
        printf("Underflow!");
        return NULL;
    }
temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
if(n>count){
    printf("Invalid Position!");
    return NULL;
}
    if(n == count){
        del = head;
        head = head->next;
        free(del);
        return head;
    }
    temp = head;
    for(int i=0;i<count-n-1;i++){
        temp = temp->next;
    }
    del = temp->next;
    temp->next = del->next;
    free(del);
    
    return head;
}