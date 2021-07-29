#include<stdio.h>

int main(){
	
	int c;
	int x = 1;
	
	char word[10];
	
	int i;
		
	for(i = 0; (c =getchar()) != '\n'; i++){ word[i] = c; }
	word[i] = '\0';
	printf("word: %s\n", word);
	
	return 0;
}





























