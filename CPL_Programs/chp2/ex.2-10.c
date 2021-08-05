#include<stdio.h>
#include<ctype.h>

int to_upper(int c);
int to_lower(int c);

int main(){
	
	int c;
	
	printf("a: %d, A: %d\n", 'a', 'A');
	printf("z: %d, Z: %d\n", 'z', 'Z');
	while((c = getchar()) != EOF){
		
		//putchar(to_upper(c));
		putchar(to_lower(c));
	}
	
	return 0;
}

int to_upper(int c){ return c = (c >= 'a' && c <='z') ? c = (c-32):c; }
int to_lower(int c){ return c = (c >= 'A' && c <= 'Z') ? c = (c+32):c; }