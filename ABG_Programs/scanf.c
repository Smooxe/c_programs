#include<stdio.h>

int main(){
	char first_initial;
	char last_initial;
	int age;
	int favorite_number;
	
	printf("What letter does your first name begin with?\n");
	scanf(" %c", &first_initial);
	printf("What letter does your last name begin with?\n");
	scanf(" %c", &last_initial);
	printf("How old are you?\n");
	scanf(" %d", &age);
	printf("What is your favorite number(integer only)?\n");
	scanf(" %d", &favorite_number);
	
	printf("\nYour intitials are %c.%c. and you are %d years old", first_initial, last_initial, age);
	printf("\nYour favorite number is %d.\n\n", favorite_number);
	return 0;
}