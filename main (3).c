#include <stdio.h>
#include <stdlib.h>

struct Number {
    int num; //data
    struct Number *next; //pointer
};

typedef struct Number node;
typedef struct Number *ndPtr;

void printList(ndPtr First);

int main()
{
    ndPtr First, Last, newNode;

    First=NULL;

    int n;  //size of the list

    printf("Enter the size of the list, n= ");
    scanf("%d", &n);

    int i=0;
    for(; i<n; i++) {

        newNode=(ndPtr)malloc(sizeof(node));
        scanf("%d", &newNode->num);
        newNode->next=NULL;

        if(First==NULL){
            First=newNode;
            Last=newNode;
        }
        else{
            Last->next=newNode;
            Last=newNode;
        }
    }

    printList(First);

    return 0;
}

void printList(ndPtr First){
    ndPtr tmp= First;
    while(tmp!=NULL){

        printf("%d ", tmp->num);
        tmp=tmp->next;
    }
}
