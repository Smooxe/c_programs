#include<stdio.h>

int main(){
	
	float num1, num2, result;
	char choice;
	
	do{
		printf("Enter the first number to multiply.\n");
		scanf(" %f", &num1);
		
		printf("Enter the second number to multiply.\n");
		scanf(" %f", &num2);
		
		printf("%.2f * %.2f = %.2f.\n", num1, num2, (result = (num1*num2)));
		
		printf("Do you wish to multiply more numbers? ('Y'/'N')\n");
		scanf(" %c", &choice);
		
		if(choice == 'n') {choice = 'N'; }

	}while(choice != 'N');
	
	return 0;
}