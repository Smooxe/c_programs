#include<stdio.h>

int main(){
	
	int input = 10;
	int n = 2;
	
	printf("input: %d\n", (input>>n)&1);
	
	return 0;
}