#include<stdio.h>

int main(){
	
	int c;
	
	while((c = getchar()) != EOF){ printf("EOF: %d\n", c != EOF); }
	printf("EOF: %d\n", c != EOF);
	
	return 0;
}