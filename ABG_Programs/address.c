#include<stdio.h>
#include<string.h>

int main(){
	
	char city[15];
	char st[3];
	char full_location[18] = "";
	
	puts("What town do you live in? ");
	gets(city);
	
	puts("What state do you live in? (2 letter abbreviation)");
	gets(st);
	
	strcat(full_location, city);
	strcat(full_location, ", ");
	strcat(full_location, st);
	
	puts("\nYou live in ");
	puts(full_location);
	
	return 0;
}