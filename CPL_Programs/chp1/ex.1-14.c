#include<stdio.h>
#include<ctype.h>

int main(){
	
	int c, i;
	int max_num_letters = 0;
	
	char letters_array[25];
	char num_of_letters[25];
	
	for(i = 'A'; i <= 'Z'; i++){ 
		letters_array[i-'A'] = i;
		num_of_letters[i-'A'] = 0;
	}
	
	while((c = getchar()) != EOF){
		if(toupper(c) >= 'A' && toupper(c) <= 'Z'){ 
			if(max_num_letters <= ++num_of_letters[toupper(c)-'A']){ max_num_letters = num_of_letters[toupper(c)-'A']; } 
		}
	}
	
	printf("max_num_letters: %d\n\n", max_num_letters);
	printf("* LETTER HISTOGRAM\n");
	for(max_num_letters; max_num_letters > 0; --max_num_letters){
		printf("* ");
		for(i = 0; i < 26 ; ++i){
			if(num_of_letters[i] > 0){ 
				//printf("letter: %c, number: %2d | ", letters_array[i], num_of_letters[i]); 
				
				if(num_of_letters[i] >= max_num_letters){ printf("# "); }
				else{ printf("  "); }
			} 
		}
		putchar('*');
		putchar('\n');
	}
	
	printf("* ");
	for(i = 0; i < 26; ++i){ if(num_of_letters[i] > 0){ printf("- "); } }
	printf("*\n");
	
	printf("* ");
	for(i = 0; i < 26; ++i){ if(num_of_letters[i] > 0){ printf("%c ", letters_array[i]); } }
	printf("*\n");
	printf("* ");
	for(i = 0; i < 26; ++i){ if(num_of_letters[i] > 0){ printf("* "); } }
	printf("*\n");
	return 0;
}





































