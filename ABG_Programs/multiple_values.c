#include<stdio.h>

void change(int i, float *x, int array[5]);

int main(){
	
	int ctr;
	int i = 10;
	float x = 20.5;
	int array[5] = {10,20,30,40,50};
	
	puts("Here are mains() variables before the function.\n");
	printf("i is %d,\nx is %.1f,\n", i, x);
	for(ctr = 0; ctr < 5; ctr++){ printf("array[%d] is %d\n", ctr, array[ctr]); }
	
	change(i, &x, array);
	
	puts("\n\nHere ae main()'s variables after the function: ");
	printf("i is %d,\nx is %.1f,\n", i, x);
	for(ctr = 0; ctr < 5; ctr++){ printf("array[%d] is %d\n", ctr, array[ctr]); }
	
	return 0;
}
/****************************************************************************/

void change(int i, float *x, int array[5]){
	int j;
	
	i = 47;
	*x = 97.6;
	
	for(j = 0; j < 5; j++){ array[j] = 100+100*j; }
	
}
























