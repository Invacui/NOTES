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
    for(ptr = &arr[0][0]; ptr <= &arr[i-1][j-1] ; ptr++) //It is necessary here to assign the value of ptr else it will consider the value implicitly
    {
        printf("\nPrinted Elements are \n");
        printf("%d", *ptr);
        
    }
    return 0;
}

/*//RUN THIS CODE NIG3ER
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[5][2]={2,3,5,4,8,8,9,45,5,1};
    int *i = &a[0][0];
    for(i ; i <= &a[4][1] ;i++)
    {
        int *ze = &a[0][0];
        int cal = {(i - ze )};
        cout<<"\n"<<i<<"-"<<ze<<"\n";
        cout<<*i<<"==>"<<i<<" "<<"INDEX==>"<<cal<<"\n";
    }
    int arr[5] ={5,21,55,6,8};
    int *po = &arr[3];
    int *zeq = &arr[0];
    int cal = (po-zeq)%4;
    cout<<"\n"<<po<<" "<<cal<<" "<<*po;

    return 0;
}*/
