#include<stdio.h>
#include<stdlib.h>

FILE * fptr;

int main(){
	
	fptr = fopen("C:\\c_other_files\\hello_world.c", "w");
	if(!fptr){ printf("\nThere was an Error opening file.\n"); exit(1); }
	
	fprintf(fptr,"#include<stdio.h>\n\n");
	fprintf(fptr,"int main(){\n");
	fprintf(fptr,"	printf(\"Hello World. test\\n\");\n");
	fprintf(fptr,"	return 0;\n}\n");
	
	system("gcc C:\\c_other_files\\hello_world.c -o hello_world.exe");
	//system("gcc hello_world.c -o hello_world.exe");
	
	return 0;
}