#include<stdio.h>
#include<string.h>

void dtob(int dec, int base);

void reverse(char s[]);
int main(){
	
	int dec = 100;
	int base = 16;

	char base_num[100];
	
	printf("dec: %d ", dec);
	dtob(dec, base);
	printf("base: %s\n", base_num);
	
	return 0;
}

void dtob(int dec, int base){
	int i;
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