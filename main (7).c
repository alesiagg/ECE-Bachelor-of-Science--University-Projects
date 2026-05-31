#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Name{
	
	char name[25];//assuming the max num of characters for a name is 25
	int length;
	int grade;
	
};

struct Name n1[50000];

void getData(int n);
void getLength(int n);
void Sort(int s);
void print(int m);

int main(void) {
	
	int n;
	int m;
	
	scanf("%d %d", &n, &m);
	
	getData(n);
	getLength(n);
	Sort(n);
	print(m);
	
	return 0;
}

void getData(int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%s %d", &n1[i].name, &n1[i].grade);
	}
}

void getLength(int n){
	int i;
	for(i=0; i<n; i++){
		n1[i].length=strlen(n1[i].name);
	}
}

void Sort(int s){
	int i,j;
	struct Name temp;
	
	  for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (n1[j].length > n1[j + 1].length)
            {
                temp = n1[j];
                n1[j] = n1[j + 1];
                n1[j + 1] = temp;
            } 
        }
    }
    
      for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
           if(n1[j].length == n1[j + 1].length){
		   
		    if (n1[j].grade > n1[j + 1].grade)
            {
                temp = n1[j];
                n1[j] = n1[j + 1];
                n1[j + 1] = temp;
            } 
            }
        }
    }
	
}

void print(int m){
	int i;
	printf("OUTPUT:\n");
	for(i=0; i<m; i++){
		printf("%s %d\n", n1[i].name, n1[i].grade);
	}
}


