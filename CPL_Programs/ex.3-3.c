#include<stdio.h>
#include<ctype.h>
//#include<string.h>

void expand(char s1[], char s2[]);

int main(){
	
	char s1[100] = "a-b-c-fA-F0123-9";
	char s2[100];
	
	expand(s1, s2);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	return 0;
}

void expand(char s1[], char s2[]){
	int i, j;
	for(i = 0, j = 0; s1[i] != '\0'; i++){
		if(i == 0 && s1[i] == '-'){ i++; }
		if(s1[i] == '-'){ for(int k = s1[i-1]+1; k < s1[i+1]; k++){ s2[j++] = k; } }
		else{ s2[j++] = s1[i]; }
	}
	s2[j] = '\0';
}
