// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
 typedef struct ListNode NO;
 
struct ListNode 
 {
      int data;
      struct ListNode *link;
 };
/*---------------------------------------------------------PRINTING LL---------------------------------------------------------*/ 
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
/*---------------------------------------------------------REMOVING Nth NODE FROM LL---------------------------------------------------------*/
struct ListNode* removeNthFromEnd(struct ListNode* head , int n){
    int count = 1;                                //BLOCK START  
    NO *ptr = malloc(sizeof(struct ListNode));    //COUNTING THE LENGTH OF LL
    ptr = head;
    while(ptr != NULL)
    {
        ptr = ptr->link ;
        ++count;
        
    }                                             //BLOCK END
    int sum = count - (n);                        //CALCULATING SUM
    
 if(sum == 1){                                    //BLOCK START
   if(head == NULL)                               //CALCULATING NTH NODE AND REMOVING IT 
     {return NULL;}
       else{
          NO *temp1 = head;
           head = head -> link;
           free(temp1);
            temp1 =NULL;
       }
    }
       else{
    struct ListNode *prev = head;
    struct ListNode *curr = head;
    while(sum != 1){
    prev = curr; 
    curr = curr->link;
    sum--;
    }
    prev->link = curr->link;
    free(curr);
    curr->link = NULL;
   }
      
   
    return head;
}
/*---------------------------------------------------------DRIVER BLOCK---------------------------------------------------------*/
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
    int key = 5;
    printdata(head);
    head = removeNthFromEnd(head, key);
    printf("\n\n");
    printdata(head);
    return 0;
}
