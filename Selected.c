#include <stdio.h>
#include <stdlib.h>

struct N {
    int data;
    struct N *link;
}*curr,*head;

/*---------------------------------------------------------------------------------------------*/
struct N* printdata(struct N *head)
{
    if(head == NULL) {
        printf("Null");
    } else {
        struct N *ptr = (struct N *)malloc(sizeof(struct N));
        ptr = head;
        while(ptr != NULL) {
            printf("%d", ptr->data);
            if(ptr->link != NULL) {
                printf(" ->");
            }
            ptr = ptr->link;
        }
    }
}
/*---------------------------------------------------------------------------------------------*/
struct N* insert_make(struct N *head,struct N* curr)
{
    curr = (struct N*)malloc(sizeof(struct N));
    scanf("%d", &curr->data);
    curr->link = NULL;

    while(head->link != NULL) {
        head = head->link;
    }
    head-> link = curr;
    return head;
}
/*---------------------------------------------------------------------------------------------*/

struct N* head_make()
{
    head = (struct N*)malloc(sizeof(struct N));
    scanf("%d", &head->data);
    head->link = NULL;
    return head;
}

/*------------------------------------------------------------------------------------------------*/

int main()
{

    int Choice;
    char GG;
    do {

        printf("Enter the choice :\n1.:Enter the First Element of the LL\n2.:Insert Element Into the LL\n3.:Print the LL\n");
        scanf("%d", &Choice);
        switch(Choice) {
        case 1 :
            if(head == NULL) {
                head_make();
                break;
            } else {
                printf("Invalid Choice Head is already present!");
                break;
            }

        case 2 :
            if(head == NULL && Choice == 2) {
                printf("Fill Up The First NODE First");
            } else {
                insert_make(head,curr);
            }
            break;
        case 3 :
            printdata(head);
            break;

        default :
            printf("Invalid Input");
        }
        printf("\n Do you Want to Continue (Y/N) ?");
        scanf("\n%c" , &GG);
    } while(GG == 'y' || GG == 'Y');

}
