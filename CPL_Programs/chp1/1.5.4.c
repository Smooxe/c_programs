#include<stdio.h>

#define	IN	1
#define	OUT	0

int main(){
	
	int c;
	int num_of_char, num_of_word, num_of_line;
	int is_word = OUT;
	
	num_of_char = num_of_word = num_of_line = 0;
	
	while((c = getchar()) != EOF){
		if(c == '\n'){ ++num_of_line; }
		if(c != ' ' && c != '\n' && c != '\t'){++num_of_char; }
		else{ ++num_of_word; }
	
	if(num_of_char <= 0){ num_of_char = num_of_word = num_of_line = 0; }
	
	printf("\n****************************************\n");
	printf("number of characters:\t%d\n", num_of_char);
	printf("number of words:\t%d\n", num_of_word);
	printf("number of lines:\t%d\n", num_of_line);
	printf("****************************************\n");
	
	printf("\nENDING PROGRAM!\n");
	return 0;
}