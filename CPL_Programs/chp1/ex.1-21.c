#include<stdio.h>

#define	TRUE	1
#define FALSE	0

int main(){
	
	char string[50] = "jon victor     is     me";
	char new_string[50];
	
	int i, j;
	int is_blank = FALSE;
	int num_of_blanks = 0;
	
	
	for(i = 0, j = 0; i < 26; ++i){
		
		if(string[i] == ' '){ ++num_of_blanks; is_blank = TRUE; }
		else{ is_blank = FALSE; }
		if(num_of_blanks >= 3){ new_string[j++] = '\t'; num_of_blanks = 0; }		
		else if(num_of_blanks < 3 && is_blank == FALSE){
			for(num_of_blanks; num_of_blanks > 0; --num_of_blanks){
				new_string[j++] = '-';
			}
		}
		
		if(is_blank == FALSE){ new_string[j] = string[i]; ++j; }
	}
	new_string[j] = '\0';
	
	printf("\nold_string: %s\n", string);
	printf("new_string: %s\n", new_string);
	
	return 0;
}