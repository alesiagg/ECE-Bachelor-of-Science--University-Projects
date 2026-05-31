#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n, *p; //pointers n and p
    n=(int*)malloc(sizeof(int));   //allocating a memory with a size of integer for a pointer that is an integer
    scanf("%d", n); //there is no need for &
                    //because n is already accessing an address, so we don't need to access the address of the variable

    p=(int*)malloc(sizeof(int)*(*n));   //size of an integer multiplying the number given by user on scanf

    int i;
    for(i=0; i<*n; i++){
        p[i]=i;
    }

    for(i=0; i<*n; i++){
        printf("%d ", p[i]);
    }

    return 0;
}
