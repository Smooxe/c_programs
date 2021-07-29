#include<stdio.h>

#define MAX_DEC	1000

unsigned char *reverse_array(char *array, int length);

int main(){
	
	char name[10] = "jonathan";
	printf("name: %s\n", reverse_array(name, 8));
	
	return 0;
}

unsigned char *reverse_array(char *array, int length){
	
	int i, j;
	char temp_array[MAX_DEC];
	
	for(i = length-1, j = 0; i >= 0; i--){ temp_array[j] = array[i]; j++; }
	temp_array[j++] = '\0';
	for(i = 0; i < j; i++){ array[i] = temp_array[i]; }
	
	return array;
}





















