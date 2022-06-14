#include <stdio.h>
#include <stdlib.h>

struct N{
    int data;
    struct N *link;
}
printdata(struct N *head)
{
    if(head == NULL){
    printf("Null");}
    else
    {
        struct N *ptr = (struct N *)malloc(sizeof(struct N));
        ptr = head;
        while(ptr->link != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->link;
        }
    }
}
int main() {
struct N *head = (struct N*)malloc(sizeof(struct N));
head->data = 45;
head->link = NULL;
struct N *curr = (struct N*)malloc(sizeof(struct N));
curr->data = 145;
curr->link = NULL;
head->link = curr;
curr = (struct N*)malloc(sizeof(struct N));
curr->data = 245;
curr->link = NULL;
head->link->link=curr;

printdata(head);

}
