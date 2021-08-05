#include<stdio.h>

int main(){
	
	int input = 12;
	int mask = ~(~0<<1);
	
	printf("input lsb is set to: (%d)\n", input&mask);
	
	return 0;
}