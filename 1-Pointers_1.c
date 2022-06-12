#include <stdio.h>

int main()
{
//Pointer test
//Declaration of pointers and its variable
int v1,*p1;
v1 = 1;

//initialization of a ptr
p1 = &v1; //Correct way to initialize a ptr



printf("Printing P1 pointer value : %d\n", *p1);
printf("Printing P1 value : %d\n", p1);
printf("Printing P1 address : %d\n", &p1);

printf("Printing V1 address : %d\n", &v1);
printf("Printing V1 value : %d\n", v1);



return 0;

}

//*p2 = &v2;// Wrong way ,if you already declared *p2 then it will consider this statement as Assignment operation


/*
int *p2----->[ mem block ] //declaration time allocation


*p2 = &v2 --------->[       v2      ]-------->[ ?????????? ] 
                      0xc85424200                   p2
Address of v2 is assigned to *p2 will produce error of not intializing pointer p2 and assiging value to an unknown pointing address will create error

*/
