#include<stdio.h>

#define	CHART_SYMBOL	'#'
#define	LIST_SIZE		11

int main(){
	
	int num_list[LIST_SIZE];
	
	int word_length = 0;
	int num_of_word = 0;
	int c;
	
	for(int i = 0; i < LIST_SIZE; ++i){ num_list[i] = 0; }
	
	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\n' && c != '\t'){ ++word_length; } 
		else{ 
			if(word_length < LIST_SIZE && word_length != 0){ ++num_list[word_length]; }
			word_length = 0; 
		}
	}
	for(int i = 0; i < LIST_SIZE; ++i){ if(num_of_word <= num_list[i]){ num_of_word = num_list[i]; } }
	
	printf("* VERTICAL NUMBER HISTOGRAM *\n");
	for(++num_of_word; num_of_word > 0; --num_of_word){
		printf("*    ");
		for(int i = 0; i < LIST_SIZE; ++i){
			if(num_list[i] >= num_of_word){ printf("# "); }
			else{ printf("  "); }
		}
		printf("  *");
		putchar('\n');
	}
	printf("*    - - - - - - - - - --    *\n*    ");
	for(int i = 1; i < LIST_SIZE; ++i){printf("%d ", i);}
	printf("   *");
	printf("\n******************************\n");
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	