#include<stdio.h>

#define LIM	10
enum loop { NO, YES };
enum loop ok_loop = YES;

int main(){
	
	int i = 0;
	int c;
	
	char s[LIM];
	while(ok_loop == YES){
		
		
		if(i < LIM-1){
			if((c = getchar()) != '\n'){  
				if(c != EOF){ 
					s[i] = c; 
					ok_loop = YES; 
					++i;
				}
			}
			else{ ok_loop = NO; }
		}
		else{ ok_loop = NO; }
		
	}
	s[i] = '\0';
	printf("s: %s\n", s);
	return 0;
}