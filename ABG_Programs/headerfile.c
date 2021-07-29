#include<stdio.h>
#include<string.h>
#include"headerfile.h"

int main(){
	int age;
	char child_name[14] = "Thomas";
	printf("\n%s have %d kids.\n",FAMILY, KIDS);
	
	age = 11;
	printf("The oldest, %s is %d.\n", child_name, age);
	
	strcpy(child_name, "Christopher");
	age = 6;
	printf("The middle boy , %s, is %d.\n", child_name, age);
	
	age = 3;
	strcpy(child_name, "Benjami");
	printf("The youngest, %s, is %d.\n", child_name, age);
	return 0;
}