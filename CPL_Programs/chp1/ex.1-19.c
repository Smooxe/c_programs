#include<stdio.h>

#define MAX_LINE	10000

int get_line(char string[]);
void reverse(char string[], int string_length);

int main(){
	
	char string[MAX_LINE];
	int string_length = 0;
	
	printf("string_length: %d\nstring: %s\n", string_length = get_line(string), string);
	reverse(string, string_length);
	printf("reverse string: %s\n", string);
	
	return 0;
}

int get_line(char string[]){
	
	int i, c;
	for(i = 0; i < MAX_LINE-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		string[i] = c;
	}
	if(c == '\n' || i >= MAX_LINE-1){ string[i] = '\0'; }
	
	return i;
}

void reverse(char string[], int string_length){
	int i;
	char c;
	for(i = 0; i < --string_length; ++i){
		c = string[i];
		string[i] = string[string_length];
		string[string_length] = c;
	}
}

















