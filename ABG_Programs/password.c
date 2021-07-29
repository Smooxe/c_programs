#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	int i;
	int has_upper, has_lower, has_digit;
	char user[25], password[25];
	
	has_upper = has_lower = has_digit = 0;
	
	printf("What is your username?\n");
	scanf(" %s", user);
	printf("Create a password.\n");
	scanf(" %s", password);
	
	for(i = 0; i < strlen(password); i++){
		if(isdigit(password[i])){ has_digit = 1; continue; }
		if(isupper(password[i])){ has_upper = 1; continue; }
		if(islower(password[i])){ has_lower = 1; continue; }
	}
	
	if(has_upper && has_lower && has_digit){
		printf("\n\nExcellent work, %s,\n", user);
		printf("Your password has upper and lower letters and a number.\n");
	}
	else{
		printf("\n\nYou should consider a new password, %s,\n", user);
		printf("One that users upper and lowercase letters and a number.\n");
	}
	
	return 0;
}