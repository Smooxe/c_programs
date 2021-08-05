#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(){
	
	unsigned int x = 150;
	unsigned int y = 25;

	printf("test: %d\n", ~(~0<<3)<<2 );
	printf("x: %d\n", setbits(x, 4, 3, y));
	
	return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y){
	return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);
}