#include<stdio.h>

#define LIM	1000

int get_line(char line[]);
void copy(char from[], char to[]);

int main(){
	
	char line[LIM], max_line[LIM];
	int current_char = 0;
	int max_char = 0;
	
	while((current_char = get_line(line)) != 0){
		if(max_char <= current_char){ 
			max_char = current_char; 
			copy(line, max_line);
		}
	}
	printf("max_char = %d\n", max_char);
	printf("max_line: %s\n", max_line);
	
	return 0;
}

int get_line(char line[]){
	int c, i;
	for(i = 0; i < LIM-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}
	if(c == '\n' || i >= LIM-1){ line[i] = '\0'; }
	return i;
}

void copy(char from[], char to[]){
	int i = 0;
	while((to[i] = from[i]) != '\0'){ ++i; }
	to[i] = '\0';
}