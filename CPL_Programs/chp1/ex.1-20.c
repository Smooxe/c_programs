#include<stdio.h>

#define MAX_CHAR_LENGTH	1000

int get_input(char string[MAX_CHAR_LENGTH]);
int replace_tab(char new_string[], int j);

int main(){
	
	char string[MAX_CHAR_LENGTH];
	char new_string[MAX_CHAR_LENGTH];
	
	int string_size = 0;
	int i, j, t = 0;
	
	while((string_size = get_input(string)) > 0){	
		printf("stinrg_size: %d\nstring: %s\n", string_size, string);
		
		for(i = 0, j = 0; i < string_size && string[i] != '\0'; ++i, ++j){
			new_string[j] = string[i];
			if(string[i] == '\t'){ j = replace_tab(new_string, j); }
		}
		new_string[j] = '\0';
		
		printf("new_string: %s\n", new_string);
	}
	
	return 0;
}

int get_input(char string[MAX_CHAR_LENGTH]){
	int i, c;
	for(i = 0; i < MAX_CHAR_LENGTH-1 && (c = getchar()) != EOF && c != '\n'; ++i){ string[i] = c; }
	if(c == '\n' || i >= MAX_CHAR_LENGTH-1){ string[i] = '\0'; }
	return i;
}

int replace_tab(char new_string[], int j){
	for(int k = 0; k < 4; ++k){ new_string[j] = '-'; ++j; }
	return --j;
}

























