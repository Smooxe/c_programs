#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *fptr;

int main(){
	char file_loc[40] = "C:\\c_other_files\\";
	char file_name[40];
	
	/*** Let the user enter the name of the file they want to append.***/
	puts("please enter the file that you wish to appened.\n");
	printf("%s", file_loc);
	gets(file_name);
	strcat(file_loc, file_name);
	
	fptr = fopen(file_loc, "a");
	if(fptr == 0){ printf("Error opening the file!\n"); exit(1); }
	/*******************************************************************/
	/*** Save the user input to the choosen file***/
	fprintf(fptr, "\nMore books to come! I guess.\n");
	
	fclose(fptr);
	/**********************************************/
	
	return 0;
}