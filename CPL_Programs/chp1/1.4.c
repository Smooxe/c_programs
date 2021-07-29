#include<stdio.h>

#define UPPER	100
#define LOWER	0
#define STEP	20

int main(){
	
	for(int f = LOWER; f <= UPPER; f += STEP){ printf("f: %3d, c: %6.1f\n", f, (5.0/9.0)*((float)f-32.0)); }
	
	return 0;
}