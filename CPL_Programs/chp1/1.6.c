#include<stdio.h>

int main(){
	
	int c;
	int list_of_num[10];
	
	for(int i = 0; i < 10; ++i){ list_of_num[i] = 0; }
	
	while((c = getchar()) != EOF){ if(c >= '0' && c <= '9'){ ++list_of_num[c-'0']; } }
	
	printf("list of numbers: ");
	for(int i = 0; i < 10; ++i){ printf(",%d", list_of_num[i]); }
	putchar('\n');
	
	return 0;
}