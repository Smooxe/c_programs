#include<stdio.h>

int main(){
	
	int c;
	long nl = 0;
	
	while((c = getchar()) != EOF){ if(c == '\n'){ ++nl; } }
	printf("nl: %ld\n", nl);
	
	return 0;
}