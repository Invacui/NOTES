/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
   int count = 1;
    struct ListNode *ptr = malloc(sizeof(struct ListNode));
    ptr = head;
    while(ptr != NULL)
    {
        ptr = ptr->next ;
        ++count;
        
    }
     struct ListNode *prev = head;
     struct ListNode *curr = head;
    
   // struct ListNode *temp =malloc(sizeof(struct ListNode));
    int sum = count - (n);
    while(sum != 0){
    prev = curr; 
    curr = curr->next;
    sum--;
    }
    prev->next = curr->next;
    free(curr);
    curr->next = NULL;
}
