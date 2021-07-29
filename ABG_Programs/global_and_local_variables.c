#include<stdio.h>
int g1 = 10;

void prAgain();

int main(){
	
	float l1 = 9.0;
	
	printf("%d, %.2f\n", g1, l1);
	
	prAgain();
	
	return 0;
}

float g2 = 19.0;

void prAgain(){
	int l2 = 5;
	printf("%d, %.2f, %d", l2, g2, g1);
}
