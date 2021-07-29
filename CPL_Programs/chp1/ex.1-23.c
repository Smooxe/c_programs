/*test_comment*/
#include<stdio.h>

int main(){
	
	int c, d;
	int in_comment = 0;
	
	char string[1000];
	
	int i = 0;
	
	/* this is a comment */
	while((c = getchar()) != EOF){
		
		if(!in_comment){ string[i++] = c; }
		
		if(d == '/' && c == '*'){ in_comment = 1; --i; }
		else if(d == '*' && c == '/'){ --i; in_comment = 0; }
		
		d = c;
		
	}
	string[i] = '\0';
	printf("string: %s\n", string);
	return 0;
}