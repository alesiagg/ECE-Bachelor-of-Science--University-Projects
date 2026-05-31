#include <stdio.h>
#include <stdlib.h>

struct time{
	int a;
	int b;
	int c;
	int ID;	
};

struct time t1[50000];

void read(int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%d",&t1[i].a);
		scanf("%d",&t1[i].b);
		scanf("%d",&t1[i].c);
	}

}

void Initialize_ID(int n){
	
	int i;
	for(i=0; i<n; i++){
		t1[i].ID=(i+1);
	}
	
}

void Sort(int s){
	
	int i;
	int j;
	struct time temp;
	
	  for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (t1[j].a > t1[j + 1].a)
            {
                temp = t1[j];
                t1[j] = t1[j + 1];
                t1[j + 1] = temp;
            } 
        }
    }
    
	  for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
        	if(t1[j].a==t1[j+1].a){
			
            if (t1[j].b > t1[j + 1].b)
            {
                temp = t1[j];
                t1[j] = t1[j + 1];
                t1[j + 1] = temp;
            } 
            }
        }
    }
    
     for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
        	if(t1[j].b==t1[j+1].b){
			
            if (t1[j].c > t1[j + 1].c)
            {
                temp = t1[j];
                t1[j] = t1[j + 1];
                t1[j + 1] = temp;
            } 
            }
        }
    }

	
	
}

void print(int m){
	
	int i;
	printf("OUTPUT:\n");
	for(i=0; i<m; i++){
		printf("%d\n", t1[i].ID);
	}
	
	
}


int main(void) {
	
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	read(n);
	Initialize_ID(n);
	Sort(n);
	print(m);
	
	
	return 0;
}
