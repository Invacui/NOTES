//for tut https://www.youtube.com/watch?v=YL8MnLAJOMg
#include <iostream>
#include <stdlib.h>
typedef struct node N;
//Linked List-----------------------------------
struct node{
    int data;
    struct node *next;
};
//Print Data------------------------------------ 
void printD(N *head)
{
    while(head != NULL)
    {
        std::cout<<head->data<<" ";
        head = head->next;
    }
}
//IAB-------------------------------------------
N *IAB(N **head, int val)           //Its just call by refrence
{
    N *temp = new N;
    temp->data = val;
    temp->next = *head;
    *head = temp;
    return *head;
}

//Driver fn-------------------------------------
int main() {
    
     N *head = new N();
     head->data = 35;
     head->next = NULL;
     N *curr = (N*)malloc(sizeof(N));
     curr->data = 45;
     curr->next = NULL;
     head->next = curr;
     curr = (N*)malloc(sizeof(N));
     curr->data = 55;
     curr->next = NULL;
     head->next->next = curr;
     std::cout<<"BEFORE INSERTION\n";
     printD(head);              //Print Data
    //Insertion at beg
     head = IAB(&head , 1);
     std::cout<<"\nAFTER INSERTION\n";
     printD(head);

    return 0;
}
