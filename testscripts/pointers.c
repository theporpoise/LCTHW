#include <stdio.h>

int main()
{
    // Pointer of integer type
    int *p;
    
    int var = 10;

    // assign variable address to pointer
    p = &var;

    printf("value of var is: %d\n", var);
    printf("address of var is: %d\n", p);
    return 0;


    
}
