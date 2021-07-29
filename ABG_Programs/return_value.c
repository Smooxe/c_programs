#include<stdio.h>

float grade_avg(float t1, float t2, float t3);

int main(){
	
	float g1, g2, g3;
	float avg;
	
	printf("What is the grade on the first test?\n");
	scanf(" %f", &g1);
	printf("What is the grade on the second test?\n");
	scanf(" %f", &g2);
	printf("What is the grade on the third test?\n");
	scanf(" %f", &g3);
	
	avg = grade_avg(g1, g2, g3);
	
	printf("\nThe grade average score is %.2f.\n", avg);
	
	return 0;
}
/********************************************************/

float grade_avg(float t1, float t2, float t3){ return ((t1+t2+t3)/3); }