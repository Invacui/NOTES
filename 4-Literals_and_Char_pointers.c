/// Online C compiler to run C program online
#include <stdio.h>

int main() {
    /*In C and in C++ single quotes identify a single character, while double quotes create a string literal.
    'a' is a single a character literal,
    while "a" is a string literal containing an 'a' and a null terminator (that is a 2 char array)*/
    
    char fv = 'm'; //single quotes means single character
    char *ptr = "mako"; //double means string literal
    char fv11[] = "mako";
    printf("*ptr = %s \nfv = %c\n" , ptr , fv);
    printf("*ptr = %c \nfv11[] %s" , *ptr, fv11);
    
    return 0;
}
/*https://www.geeksforgeeks.org/storage-for-strings-in-c/*/
/*https://overiq.com/c-programming-101/array-of-pointers-to-strings-in-c/*/
