#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAXLINE	1000
#define BASE	10

int get_line(char s[], int lim);
int reverse_int(int num);

int main(){
	
	char user_input[MAXLINE];
	double coefficent;
	int exponent = 0, power;

	get_line(user_input, MAXLINE);
	printf("%s\n", user_input);
	
	int i = 0;
	for(coefficent = 0.0; isdigit(user_input[i]); i++){ coefficent = 10.0*coefficent+(user_input[i]-'0'); }
	if(user_input[i] == '.'){ i++; }
	for(power = 1.0; isdigit(user_input[i]); i++){
		coefficent = 10.0*coefficent+(user_input[i]-'0');
		power *= 10;
	}
	coefficent = coefficent/power;
	
	printf("coefficent: %g\n", coefficent);
	if(user_input[i] == 'e'){
		for(++i; isdigit(user_input[i]); i++){ exponent = 10*exponent+(user_input[i]-'0'); }
		printf("exponent: %d\n", exponent);	
		for(i = 0; i < exponent; i++){
			coefficent *= BASE;
		}
		printf("sn_coefficent: %g\n", coefficent);
	}

	return 0;
}

int get_line(char s[], int lim){
	int c, i;
	
	i = 0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n'){ s[i++] = c; }
	if(c == '\n'){ s[i++] = c; }
	s[i] = '\0';
	
	return i;
}

















