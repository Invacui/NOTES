#include <stdio.h>
#include <stdlib.h>

int LS(int,int[],int);//DECLERATION OF lINEAR SEARCH FN

int main() {
    int Ele,Len , key = 0,N, i = 0;         //VARIABLE DECLERATION
    int A[Ele];
    
    printf("Enter The Elements You Want For Your Array ::");    //ELEMENT NO INPUT
    scanf("%d", &Ele);
    
    do
    {
        printf("Enter The Elements For Your Array[%d] pos:: \n" , i); //LOOP FOR ELEMENT INPUT
        scanf("%d", &A[Ele]);
        i++;
    }while(i != Ele);
    
    printf("Enter The Elements to find it in index :: \n");     //KEY INPUT FOR LS
    scanf("%d", &key);
    
    Len = sizeof(A)/sizeof(A[0]); //LENGTH FINDING TOTALLY USELESS STATEMENT XD 
    N = LS(key,A,Len);      //CALLING OF LS FN
    if(N == -1)
    {
     printf("Value Not Found!!");       //CONDITION TO PRINT RESULT
    }
    else
    {
     printf("Value Found!! ==>> %d ", A[N]);   //CONDITION TO PRINT RESULT
    }
    return 0;
}

int LS(int key,int A[],int Len )        //DEFINITION OF LS FN
{
    int x = 0;
     while(x <= Len)        //LS SEARCHING THE WHOLE INDEX OF ARRAY 
        {
            x++;            //IMP TO PUT IT ON THE TOP
            if(key == A[x])
            {return x;}
            else if(x == Len && key != A[x])
            {return -1;}
            else
            {continue;}
            
        }
        
}
