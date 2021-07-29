#include<stdio.h>

int main(){
	
	int f;
	float c;
	int lower = 0, upper = 100;
	int step = 10;
	
	f = lower;
	printf("\n*** Fahrenheit to Celsius Converter ***\n");
	while(f <= upper){
		c = (5.0/9.0)*(f-32);
		printf("F: %3d, C: %6.1f\n", f, c);
		f += step;
	}
	printf("***************************************\n");
	return 0;
}