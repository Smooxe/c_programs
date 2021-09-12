#include<stdio.h>
#include<string.h>

void itoa(int n, char s[], int min);
void reverse(char s[]);

int main(){
	
	int num = 12;
	int min = 8;
	char s[100];
	
	itoa(num, s, min);
	printf("s: %s\n", s);
	
	return 0;
}

void itoa(int n, char s[], int min){
	
	int i;
	for(i = 0; i < min; i++){
		s[i] = (n%10)+'0';
		n/=10;
	}
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[]){
	int i, j, c;
	for(i = 0, j = strlen(s)-1; i < j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}