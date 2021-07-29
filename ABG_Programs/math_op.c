#include<stdio.h>

int main(){
	
	float a = 19.0;
	float b = 5.0;
	float f_answer;
	
	int x = 19;
	int y = 5;
	int i_answer;
	
	f_answer = a/b;
	printf("%.1f divided by %.1f equals %.1f\n", a, b ,f_answer);
	f_answer = x/y;
	printf("%d divided by %d equals %.1f\n", x, y, f_answer);
	
	i_answer = a/b;
	printf("%.1f divded by %.1f equals %d\n", a, b, i_answer);
	i_answer = x%y;
	printf("%d modulus(i.e. remainder of) %d equals %d\n", x, y, i_answer);
	
	return 0;
}