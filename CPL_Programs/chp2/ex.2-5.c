#include<stdio.h>
#include<string.h>

#define FALSE	0
#define TRUE	1

int main(){
	
	char s1[100] = "jonathan";
	char s2[100] = "jacob";
	
	int i, j;
	int is_match = FALSE;
	char *ret;
	for(i = 0; s2[i] != '\0'; ++i){
		for(j = 0; s1[j] != '\0' && s1[j] != s2[i]; ++j);
		if(s1[j] == s2[i]){ printf("s1[%2d] == %c\n",j, s2[i] ); is_match = TRUE; }
	}
	if(!is_match){ printf("-1 no matches found.\n"); }
	
	ret = strpbrk(s1, s2);
	if(ret){ printf("%c\n", ret[2]); }
	else{ printf("no matches found.\n"); }
	
	return 0;
}