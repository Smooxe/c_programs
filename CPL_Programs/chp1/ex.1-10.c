#include<stdio.h>

int main(){
	
	// \t = 9, \\ = 92, t = 116
	
	int c;
	int is_control_char = 0;
	char control_char[3] = {'\t', '\\', ' '};
	char letter_char[3] = {'t', '\\', '_'};
	
	printf("'\\\\': %d, 't': %d\n", '\\', 't');
	
	while((c = getchar()) != EOF){
		for(int i = 0; i < 3; ++i){ 
			if(c == control_char[i]){ 
				printf("\\%c", letter_char[i]); 
				is_control_char = 1;
			} 
		}
		if(!is_control_char){ putchar(c); }
		is_control_char = 0;
	}
	
	return 0;
}