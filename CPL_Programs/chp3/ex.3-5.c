#include<stdio.h>
#include<string.h>

void dtob(char base_num[]);

void reverse(char s[]);
int main(){

	char base_num[100];
	
	dtob(base_num);
	printf("output: %s\n", base_num);
	
	return 0;
}

void dtob(char base_num[]){
	int i;
	int dec = 100;
	int base = 16;
	for(i = 0; dec > 0; i++){
		base_num[i] = (dec%base) > 9 ? 'A'+((dec%base)%10) : '0'+(dec%base);
		dec/=base;
	}
	base_num[i] = '\0';
	reverse(base_num);
}

void reverse(char s[]){
	
	char c;
	int i, j;
	for(i = 0, j = strlen(s)-1; i < j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}