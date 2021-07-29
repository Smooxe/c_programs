#include<stdio.h>

int main(){
	
	char s1[100] = "jonathan";
	char s2[100] = "jacob";
	
	int i, j, c;
	for(c = 0; s2[c] != '\0'; ++c){		
		for(i = j = 0; s1[i] != '\0'; ++i){
			if(s1[i] != s2[c]){ s1[j++] = s1[i]; }
		}
		s1[j] = '\0';
	}
	printf("s: %s\n", s1);
	
	return 0;
}