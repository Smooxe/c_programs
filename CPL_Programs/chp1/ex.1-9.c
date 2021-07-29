#include<stdio.h>

int main(){
	
	int c;
	int blanks = 0;
	
	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\t'){ putchar(c); blanks = 0; }
		else if(c == '\t' && blanks == 0){ c = ' '; putchar(c); blanks = 1; }
		else if(c == ' ' && blanks == 0){ putchar(c); blanks = 1; }
	}
	
	return 0;
}