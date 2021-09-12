#include<stdio.h>
#include<ctype.h>

#define MAXLINE	1000
#define	BASE	10

int get_line(char s[], int lim);
double atof(char s[]);

int main(){
	
	
	
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

double atof(char s[]){
	double val, power;
	int i, sign, exponent;
	
	for(i = 0; isspace(s[i]); i++);
	sign  = (s[i] == '-') ? -1:1;
	if(s[i] == '+' || s[i] == '-'){ i++; }
	for(val = 0.0; isdigit(s[i]); i++){ val = 10.0*val+(s[i]-'0'); }
	if(s[i] == '.'){ i++; }
	for(power = 1.0; isdigit(s[i]); i++){
		val = 10.0*val+(s[i]-'0');
		power *= 10;
	}
	
	val = sign*val/power;
	
	if(s[i] == 'e' || s[i] == 'E'){
		sign = (s[++i] == '-') ? -1:1;
		if(s[i] == '+' || s[i] == '-'){ i++; }
		for(exponent = 0; isdigit(s[i]); i++){ exponent = 10*exponent+(s[i]-'0'); }
		if(sign > 0){ while(exponent-- > 0){ val *= BASE; } }
		else{ while(exponent-- > 0){ val /= BASE; } }
	}
	
	return val;
}
























