#include<stdio.h>

#define CUR_YEAR 2020

int main(){
	
	int year_born, age;
	
	printf("What year were you born?\n");
	scanf("%d", &year_born);
	
	if(year_born > CUR_YEAR){
		printf("Really? Yo haven't been born yet?\n");
		printf("What year were you born?\n");
		scanf("%d", &year_born);
	}
	
	age = CUR_YEAR - year_born;
	printf("\nSo this year you will turn %d on your birthday.\n", age);
	
	if((year_born%4) == 0){ printf("\nYou were born on a leap year.\n"); }
	return 0;
}