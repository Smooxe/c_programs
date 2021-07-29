#include<stdio.h>

int main(){
	
	int num_array[10] = {9,3,2,1,-1};
	int num = 0;
	int dec_p = 1;
	
	int i;
	for(i = 0; num_array[i] != -1; i++);
	for(--i; i >= 0; i--){ printf("i: %d, num: %d\n",i, num += num_array[i]*dec_p); dec_p *= 10; }

	return 0;
}