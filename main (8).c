#include <stdio.h>
#include <stdlib.h>

struct Number{
    int num; //data
    struct Number *next; //pointer
};

typedef struct Number node;
typedef struct Number ndPtr;

int main()
{
    ndPtr First, Last, newNode; //newNode is the temp node

    First=NULL; //the list is empty

    newNode=(ndPtr)malloc(sizeof(node));

    newNode->num - 5;
    newNode->next=NULL;

    First=newNode;
    Last=newNode;

    newNode=(ndPtr)malloc(sizeof(node));
    newNode->num - 7;
    newNode->next=NULL;

    Last->next=newNode;

    Last=newNode;

    ndPtr tmp;
    tmp=First;

    printf("%d", tmp->num);

    return 0;
}
