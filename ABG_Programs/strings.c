#include<stdio.h>
#include<string.h>

int main(){
	
	// prints January
	char month[10] = "January";
	
	printf("%s\n", month);
	
	// prints March
	month[0] = 'M';
	month[1] = 'a';
	month[2] = 'r';
	month[3] = 'c';
	month[4] = 'h';
	month[5] = '\0';
	month[6] = ' ';
	month[7] = ' ';
	month[8] = ' ';
	month[9] = ' ';
	
	printf("%s\n", month);
	
	// prints April
	strcpy(month, "April");
	printf("%s\n", month);
	return 0;
}