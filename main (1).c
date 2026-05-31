#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Word{
	
	char a[27];
	int noV;
	int noL;
	float tv;
	
};

	struct Word w1[50000];	//the array of structures will have n structures; max value for n is 50000 according to input specification

void GetData(int n);
void Tvalue(int n);
void CountL_V(int n);
void Sort(int s);
void PrintResult(int m);


int main(void) {
	
	int n;	//number of words
	int m; //top words that will be shown
	

	
	printf("n=");
	scanf("%d", &n);
	printf("m=");
	scanf("%d", &m);
	
	GetData(n);
	CountL_V(n);
	Tvalue(n);
	Sort(n);
	PrintResult(m);
	
	return 0;
}

void GetData(int n) {
	
	int i; 
	printf("\nEnter %d words\n",n);
	for(i=0; i<n; i++) {
		scanf("%s", &w1[i].a);
	}
	
}

void CountL_V(int n) {
	
	int i, j;
	
	for (i=0; i<n; i++){
		int cnt=0;
		
			for(j=0; j<strlen(w1[i].a); j++){
			if(w1[i].a[j] == 'a' || w1[i].a[j] == 'A' || w1[i].a[j] == 'e' || w1[i].a[j] == 'E' || w1[i].a[j] == 'i' || w1[i].a[j] == 'I' || w1[i].a[j] =='o' || w1[i].a[j]=='O' || w1[i].a[j] == 'u' || w1[i].a[j] == 'U') cnt++;
			}
		
		w1[i].noV=cnt;
		w1[i].noL=strlen(w1[i].a);
		//checking if the functions works:
		//printf("%d %d\n",w1[i].noV, w1[i].noL);
		
		}
}

void Tvalue(int n){
	
	int i;
	
	for(i=0; i<n; i++){
		w1[i].tv=(w1[i].noV*1.0/w1[i].noL)*100;
			//checking if the functions works:
	//	printf("%f\n", w1[i].tv);
	}	
}

void Sort(int s){
	
    int i, j;
    struct Word temp;
  //this loop will sort them numerically
    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (w1[j].tv < w1[j + 1].tv)
            {
                temp = w1[j];
                w1[j] = w1[j + 1];
                w1[j + 1] = temp;
            } 
        }
    }
    
    //this will sort them alphabetically
    
      for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
        	if(w1[j].tv==w1[j+1].tv){
			
           	 if (w1[j].a < w1[j + 1].a)
         	   {
         	       temp = w1[j];
            	    w1[j] = w1[j + 1];
                	w1[j + 1] = temp;
            	} 
            }
        }
    }
	
}

void PrintResult(int m){
	int i; 
	printf("\nTop %m words:\n",m);
	for(i=0; i<m; i++) {
		printf("%s %f\n", w1[i].a, w1[i].tv);
	}
	
}

