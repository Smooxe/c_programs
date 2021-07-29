#include<stdio.h>

void half(int i);

int main(){
	
	int i;
	
	printf("Please Enter an intager... ");
	scanf(" %d", &i);
	
	half(i);
	
	printf("In main(), i is still %d.\n", i);
	
	return 0;
}
/*******************************************/

void half(int i){ printf("Your value halfed is %d.\n", (i /= 2)); }