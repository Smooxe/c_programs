#include<stdio.h>
#include<string.h>

#define my_abs(x)	((x) < 0 ? -(x):(x))

void itoa(int n, char s[]);
void reverse(char s[]);

int main(){
	int n = -2345646;
	char s[10];
	
	itoa(-2345646, s);
	printf("s: %s\n", s);
	
	return 0;
}

void itoa(int n, char s[]){
	int i, sign;
	
	sign = n;
	i = 0;
	do{ s[i++] = my_abs(n%10)+'0'; }
	while((n/=10) != 0);
	
	if(sign < 0){ s[i++] = '-'; }
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