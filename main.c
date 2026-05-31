#include <stdio.h>
#include <stdlib.h>

int length(char *s);


int main() {

	char *s=0;
	printf("%d \n", length(s));

	char str[]="CEN 110 - C Programming.";
	printf("%d \n", length(str));
	printf("%d \n", sizeof(char));
	return 0;

}

int length (char *s){

	if(s!=NULL){

		char *t=s;
		while (*t!='\0'){
			t++;
		}
		return t-s; //which will give me the length
	}

	return 0;	//the pointer is null
}
