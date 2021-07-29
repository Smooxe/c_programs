#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

FILE *fptr;

int main(){
	
	char letters;
	int i;
	
	fptr = fopen("C:\\c_other_files\\letters.txt", "r+");
	if(!fptr){ printf("\nThere was an Error opening the file.\n"); exit(1); }
	
	printf("Which letter would you like to change ('A'-'Z')?");
	scanf(" %d", &i);
	
	fseek(fptr, (i-1), SEEK_SET);
	fputc('*',fptr);
	
	fseek(fptr, 0, SEEK_SET);
	printf("Here is the file now.\n\n");
	for(i = 0; i < 26; i++){
		letters = fgetc(fptr);
		printf("The next letter is %c.\n", letters);
	}
	
	fclose(fptr);
	return 0;
}