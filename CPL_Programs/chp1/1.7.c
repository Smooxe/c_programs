#include<stdio.h>

int power(int x, int y);

int main(){
	
	printf("x: %d\n", power(4,9));
	
	return 0;
}

int power(int x, int y){
	int z = 1;
	for(int i = 0; i < y; ++i){ z *= x; }
	return z;
}