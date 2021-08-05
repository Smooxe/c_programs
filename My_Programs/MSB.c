#include<stdio.h>

int main(){
	
	int input = 1;
	int bits = sizeof(int)*8;
	int mask = 1<<(bits-1);
	
	if(input & mask){ printf("input: (1)\n"); }
	else{ printf("input: (0)\n"); }
	
	return 0;
}