#include<stdio.h>
#include<string.h>

void change(char name[16]);

int main(){
		
	char name[16] = "Jonathan Victor";
	printf("name is %s, ", name);
	change(name);
	
	printf("Back in main(), the name is now %s.\n", name);
	return 0;
}
/************************************************************/

void change(char name[16]){ strcpy(name, "XXXXXXXXXXXXXXX"); }