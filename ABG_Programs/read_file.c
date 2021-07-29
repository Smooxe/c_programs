#include<stdio.h>
#include<stdlib.h>
FILE *fptr;

int main(){
	
	char file_line[100];
	fptr = fopen("C:\\c_other_files\\book_info.txt", "r");
	if(fptr != 0){
		while(!feof(fptr)){
			fgets(file_line, 100, fptr);
			if(!feof(fptr)){ puts(file_line); }
		}
	}else{ printf("\nError opening file.\n"); }
	
	fclose(fptr);
	return 0;
}