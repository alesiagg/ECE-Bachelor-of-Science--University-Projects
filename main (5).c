#include <stdio.h>
#include <stdlib.h>

void getData(int *x, int n);
void showData(int *x, int n);
void sumOfArrays(int *a, int *b, int *sum, int n);


int main()
{
    int *a, *b, *sum;
    int n;  //size of these arrays
    printf("Enter size n: ");
    scanf("%d", &n);
    //memory allocation for all three arrays
    a=(int*)malloc(sizeof(int)*n);
    b=(int*)malloc(sizeof(int)*n);
    sum=(int*)malloc(sizeof(int)*n);

    printf("Enter the first list: \n");
    getData(a,n);
    printf("Enter the second list: \n");
    getData(b,n);

    sumOfArrays(a,b,sum,n);
    printf("The sum is: \n");
    showData(sum,n);

    return 0;
}

void getData(int *x, int n){
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
}

void showData(int *x, int n){
    int i;
    for(i=0; i<n; i++)
        printf("%d ", x[i]);
    printf("\n");
}

void sumOfArrays(int *a, int *b, int *sum, int n){
    int i;
    for(i=0; i<n; i++)
        sum[i]=a[i]+b[i];
}
