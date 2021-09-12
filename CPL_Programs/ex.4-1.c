#include<stdio.h>
#include<string.h>

#define MAXLINE	1000

int get_line(char s[], int lim);
int strindex(char line[], char pattern[]);

char pattern[] = "ould";

int main(){
	
	char line[MAXLINE];
	int pos = 0;
	int found = 0;
	
	while(get_line(line, MAXLINE) > 0){
		if((pos = strindex(line, pattern)) >= 0){
			printf("position: %d\n", pos);
			found++;
		}
	}
	
	return found;
}

int get_line(char s[], int lim){
	int c, i;
	
	i = 0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n'){ s[i++] = c; }
	if(c == '\n'){ s[i++] = c; }
	s[i] = '\0';
	
	return i;
}

int strindex(char line[], char pattern[]){
	
	int i, j, k;
	
	for(i = strlen(line)-1; line[i] > 0; i--){
		for(j = i, k = strlen(pattern)-1; k >= 0  && line[j] == pattern[k]; j--, k--);
		if(k <= 0){ return i-(strlen(pattern)-1); }
		printf("i: %d\n", i);
	}
	
	return -1;
}