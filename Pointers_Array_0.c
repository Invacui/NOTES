#include <stdio.h>
#include <stdlib.h>
#define N 4
int main() {
int i[N] = {14,9,30,04} , x = 0;
//int *ptr = (int *)malloc(sizeof(int));
int *ptr;
    int *p = i;
    ptr = &i[0];
    printf("Value is %d *p\n", *p); //One Way to Declare and call an arary using ptr
    printf("Value is %d *(p+2)\n", *(p+2));//Show how to print the next index in Array
    printf("Value is %d *p+2\n", *p+2);//Importance of Brackets 
    printf("Value is %d *ptr\n", *ptr);//Another Way to Declare and call an arary using ptr
    printf("Value is %d *ptr+2\n", *ptr+2);
    printf("Value is %d *(ptr+2)\n", *(ptr+2));
   while(x < N)
   {
       printf("Loop Value %d of pointer *p \n", *(p + x));
       printf("Loop Value %d of pointer *ptr \n", *(ptr + x));
       x++;
       
   }
    return 0;
}
