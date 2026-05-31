#include <stdio.h>
#include <stdlib.h>

void getData(int *x, int n);
void showData(int *x, int n);


int main()
{
    int n=5;
    int num[]={1,2,5,9,7};
    /*showData(num,n); */

   /*printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d number(s): ", n);
    getData(num,n);
    showData(num,n);*/

    int lst;
    printf("Enter n: ");
    scanf("%d", &n);
    lst=(int*)malloc(sizeof(int)*n);    //this part is allocating the memory for the array
    printf("Enter %d number(s): ",n);
    getData(lst,n);
    showData(lst,n);

    return 0;
}

void getData(int *x, int n){    //we usually write it as int x[]

    int i;
    for(i=0; i<n; i++)
        scanf("%d", &x[i]); //do I need the & here?
}

void showData(int *x, int n){

    int i=0;
    for(;i<n; i++)
        printf("%d, ", x[i]);
    printf("\n");
}
