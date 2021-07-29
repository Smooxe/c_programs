#include<stdio.h>

#define MAX_CHAR	10

#define TRUE		1
#define	FALSE		0
 
int main(){
	
	char string[23] = "jona victor is my name";
	
	int is_word = 0;
	
	for(int i = 0, j = 0; i < 23; ++i, ++j){
		is_word = (string[i] >= 'a' && string[i] <= 'z') ? TRUE : FALSE;

		if(j >= MAX_CHAR && !is_word){ putchar('\n'); j = 0; }
		else{ putchar(string[i]); }
		
	}
	
	return 0;
}