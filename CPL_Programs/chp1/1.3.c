#include<stdio.h>

int main(){
	
	for(int f = 0; f <= 10; f += 1){ printf("f: %3d, c: %6.1f\n", f, (5.0/9.0)*(f-32)); }
	
	return 0;
}