#include<stdio.h>

#define MAX_LINE	1000

int get_line(char string[]);

int main(){
	
	char line[MAX_LINE];
	
	int c;
	int end_of_line = 1;
	for(int i = get_line(line); i >= 0; --i){
		if(line[i] >= 'A' && line[i] <= 'z'){ end_of_line = 0; }
		if((line[i] == '-' || line[i] == ' ' || line[i] == '\t') && end_of_line != 0){ printf("t "); line[i] = '\b'; }
	}
	printf("%s\n", line);
	
	return 0;
}

int get_line(char string[]){
	
	int i,c;
	
	for(i = 0; i < MAX_LINE-1 && (c = getchar()) != EOF && c != '\n'; ++i){ string[i] = c; }
	if(c == '\n' || i >= MAX_LINE-1){ string[i] = '\0'; }
	return i;
}