#include<stdio.h>

int main(){
	
	// 0|0|1|0
	// 0|0|0|0
	// 1|1|1|0
	// 0|1|0|1
	
	char grid_array[17];
	
	int i, j = 0;
	for(i = 0; i < 16; i++){ grid_array[i] = '0'; }
	grid_array[i] = '\0';
	
	for(i = 0, j = 0; i < 16; i++){ 
		if(j < 4){ printf("%c|", grid_array[0]); j++; }
		else{ putchar('\n'); j = 0; --i; }
	}
	putchar('\n');
	return 0;
}