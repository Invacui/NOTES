#include <stdio.h>
#include <stdlib.h>

struct N{
    int data;
    struct N *link;
};

/*------------------------------------------------------------------------------------------------*/
int printdata(struct N *head)
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
/*------------------------------------------------------------------------------------------------*/

struct N* head_make(struct N *head)
{
scanf("%d", &head->data);
head->link = NULL;   
return head;
}

/*------------------------------------------------------------------------------------------------*/

int insert_make(struct N *head)
{
struct N *temp = (struct N*)malloc(sizeof(struct N));
scanf("%d", &temp->data);
temp->link = NULL;
struct N *ptr = (struct N *)malloc(sizeof(struct N));
ptr = head;
while(ptr->link != NULL)
{
    ptr = ptr->link;
}
ptr-> link = temp;
//return head;
}

/*------------------------------------------------------------------------------------------------*/

int main() {
    struct N *head = (struct N*)malloc(sizeof(struct N));
    int Choice;
    char GG;
    while(1)
    {
        
        printf("Enter the choice :\n1.:Enter the First Element of the LL\n2.:Insert Element Into the LL\n3.:Print the LL\n");
        scanf("%d", &Choice);
            switch(Choice)
            {
                case 1 : head_make(head);
                        struct N *head = head_make;
                        break;
                case 2 : if(head == NULL || Choice == 2)
                            {printf("Fill Up The First NODE First");}
                            else
                            {insert_make(head);}
                            break;
                case 3 : printdata(head);
                         break;
                
                default : printf("Invalid Input");
            }
        printf("\n Do you Want to Continue (Y/N) ?");
        scanf("%c" , &GG);
    }

}
