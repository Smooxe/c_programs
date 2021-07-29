#include<stdio.h>

#define MAX_LINE	1000
#define MIN_LINE	80

int get_line(char string[]);

int main(){
	
	char string[MAX_LINE];
	int string_length = 0;
	
	while((string_length = get_line(string)) > 0){
		if(string_length >= MIN_LINE){ printf("%s\n", string); }
	}
	
	return 0;
}

int get_line(char string[]){
	
	int i, c;
	for(i = 0; i < MAX_LINE-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		string[i] = c;
	}
	if(c == '\n' || i >= EOF){ string[i] = '\0'; }
	
	return i;
}