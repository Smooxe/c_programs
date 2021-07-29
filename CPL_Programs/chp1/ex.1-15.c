#include<stdio.h>

#define LOWER	0
#define UPPER	200
#define STEP 	1

float c_to_f(int c);
float f_to_c(int f);

int main(){
	
	printf("f: %.2f\n", c_to_f(10));
	
	printf("c: %.2f\n", f_to_c(10));

	
	return 0;
}

// convert from celsius to fahrenheit.
// f = c * (9 / 5) + 32
float c_to_f(int c){
	float f;
	return f = (float)c*(9.0/5.0)+32.0;
}

// convert from fahrenheit to celsuis.
// c = (5/9)*(f-32)
float f_to_c(int f){
	float c;
	return c = (5.0/9.0)*((float)f-32.0);
}