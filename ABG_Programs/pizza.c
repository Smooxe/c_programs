#include<stdio.h>
#include<string.h>

int main(){
	
	char topping[24];
	int slices;
	int day,month,year;
	float cost;
	
	printf("How much does a pizza cost in your area?\n");
	printf("Enter as ($XX.XX)\n");
	scanf(" $%f", &cost);
	
	printf("What is your favorite one word pizza topping?\n");
	scanf(" %s", topping);
	
	printf("How many slices of %s pizza", topping);
	printf("can you eat in one sitting?\n");
	scanf(" %d", &slices);
	
	printf("What is todays date (enter it in DD/MM/YY format).\n");
	scanf(" %d/%d/%d", &day, &month, &year);
	
	printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", day, month, year);
	printf("\nand have %d slices of %s pizza!\n", slices, topping);
	printf("It will only cost you %.2f!\n\n\n", cost);
	return 0;
}