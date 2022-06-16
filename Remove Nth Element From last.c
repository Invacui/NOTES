// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
 typedef struct ListNode NO;
 
struct ListNode {
      int data;
      struct ListNode *link;
 };
 
struct ListNode* printdata(NO *head)
{
    if(head == NULL){
    printf("Null");}
    else
    {
        NO *ptr1 = (NO*)malloc(sizeof(NO));
        ptr1 = head;
        while(ptr1 != NULL)
        {
            printf("%d\n", ptr1->data);
            ptr1 = ptr1->link;
        }
    }
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
   int count = 1;
    NO *ptr = malloc(sizeof(struct ListNode));
    ptr = head;
    while(ptr != NULL)
    {
        ptr = ptr->link ;
        ++count;
        
    }
     struct ListNode *prev = head;
     struct ListNode *curr = head;
    
   // struct ListNode *temp =malloc(sizeof(struct ListNode));
   if(n == 1){
       while(head == NULL)
       {
           free(head);
           head=NULL;
       }
   }
   
    int sum = count - (n);
    while(sum != 1){
    prev = curr; 
    curr = curr->link;
    sum--;
    }
    prev->link = curr->link;
    free(curr);
    curr->link = NULL;
}
int main() {
NO *head = (NO*)malloc(sizeof(NO));
head->data = 45;
head->link = NULL;
NO *curr = (NO*)malloc(sizeof(NO));
curr->data = 145;
curr->link = NULL;
head->link = curr;
curr = (NO*)malloc(sizeof(NO));
curr->data = 245;
curr->link = NULL;
head->link->link=curr;
curr = (NO*)malloc(sizeof(NO));
curr->data = 445;
curr->link = NULL;
head->link->link->link=curr;
curr = (NO*)malloc(sizeof(NO));
curr->data = 345;
curr->link = NULL;
head->link->link->link->link=curr;
    int key = 1;
    printdata(head);
    removeNthFromEnd(head,key);
    printf("\n\n");
    printdata(head);
    return 0;
}
