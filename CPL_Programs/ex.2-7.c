#include<stdio.h>

int main(){
	
	int x = 54;
	int p = 6, n = 4;
	int mask = ~(~0<<n)<<(p+1-n);

	printf("test: %d\n", x^mask);
	
	return 0;
}