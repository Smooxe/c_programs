#include<stdio.h>

int main(){
	
	int kids;
	int *p_kids;
	float price;
	float *p_price;
	char code;
	char *p_code;

	price = 17.50;
	p_price = &price;
	
	printf("\nHow many kids are you taking to the water park? ");
	scanf(" %d", &kids);
	
	p_kids = &kids;
	
	printf("\nDo you have a discount ticket for the park?");
	printf("\nEnter 'E' for Employee discount, 'S' for sav-more ");
	printf("Discount, or 'N' for no discount: ");
	scanf(" %c", &code);
	
	p_code = &code;
	
	printf("\nFirst let's do it with the variables:\n");
	printf("You've got %d kids...\n", kids);
	switch(code){
		case('E'):printf("The employee discount saves you 25%% on the $%.2f price.", price);
				  printf("\nTotal ticket cost: $%.2f", (price*.75*kids));
				  break;
		case('S'):printf("The sav-more discount saves you 15%% on the $.2f price.", price);
				  printf("\nTotal ticket cost: %.2f.", (price*.75*kids));
				  break;
		default:printf("You will be paying full price of $%.2f for your tickets.", price);
	}
	
	printf("\nFirst let's do it with the pointers:\n");
	printf("You've got %d kids...\n", *p_kids);
	switch(code){
		case('E'):printf("The employee discount saves you 25%% on the $%.2f price.", *p_price);
				  printf("\nTotal ticket cost: $%.2f", (*p_price*.75* *p_kids));
				  break;
		case('S'):printf("The sav-more discount saves you 15%% on the $.2f price.", *p_price);
				  printf("\nTotal ticket cost: %.2f.", (*p_price*.75* *p_kids));
				  break;
		default:printf("You will be paying full price of $%.2f for your tickets.", *p_price);
	}
	return 0;
}




















