#include <stdio.h>

int main(){
	char first_initial, middle_initial;
	int number_of_pencils;
	int number_of_notebooks;
	float pencils = 0.23;
	float notebooks = 2.89;
	float lunchbox = 4.99;
	
	// information on first child.
	first_initial = 'J';
	middle_initial = 'R';
	number_of_pencils = 7;
	number_of_notebooks = 4;
	
	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", first_initial, middle_initial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", (number_of_pencils*pencils)+(number_of_notebooks*notebooks)+lunchbox);
	
	// information of second child.
	first_initial = 'A';
	middle_initial = 'J';
	number_of_pencils = 10;
	number_of_notebooks = 3;
	
	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", first_initial, middle_initial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", (number_of_pencils*pencils)+(number_of_notebooks*notebooks)+lunchbox);
	
	// information of third child.
	first_initial = 'M';
	middle_initial = 'T';
	number_of_pencils = 9;
	number_of_notebooks = 2;
	
	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", first_initial, middle_initial, number_of_pencils, number_of_notebooks);
	printf("The total cost is $%.2f\n\n", (number_of_pencils*pencils)+(number_of_notebooks*notebooks)+lunchbox);
	
	return 0;
}