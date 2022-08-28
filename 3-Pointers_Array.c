#include <stdio.h>
#include <stdlib.h>

int main() {
int i,j;
//int *ptr = (int *)malloc(sizeof(int));
int *ptr;
    printf("Enter the Row and Column of the Matrix :\n");
    scanf("%d\n%d", &i, &j);
    int arr[i][j];
    ptr = arr;
    printf("Enter The Elements of the matrix\n");
    for(ptr ; ptr <= &arr[i-1][j-1] ; ptr++) //Here ptr represent ptr = &arr[0][0] and; &arr[i-1][j-1] hrere is used to check wheather <--Look carefully u will understand
    {
        printf("Enter the element for index %d %d\n", i,j);
        scanf("%d", ptr);
        
    }
    
    printf("Working");
    for(ptr = &arr[0][0]; ptr <= &arr[i-1][j-1] ; ptr++)
    {
        printf("\nPrinted Elements are \n");
        printf("%d", *ptr);
        
    }
    return 0;
}


/*// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int val[2][2] = { 5, 10, 15};
 
    // Declare pointer variable
    int *ptr;
    ptr = val;
    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
   
    printf("Elements of the arrays are :");
    printf("%d ", *ptr );
    
    return 0;
}*/
