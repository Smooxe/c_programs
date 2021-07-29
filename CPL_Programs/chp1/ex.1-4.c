#include<stdio.h>

int main(){
	
	int c;
	float f;
	int lower = 0, upper = 10;
	int step = 1;
	
	c = lower;
	while(c <= upper){
		f = ((float)c*(9.0/5.0))+32;
		printf("c: %3d, f: %6.1f\n", c, f);
		c += step;
	}
	
	return 0;
}