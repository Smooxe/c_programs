#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	char msg[25];
	
	printf("Type up to %d characters then press enter.\n",25);
	for(i = 0; i < 25; i++){
		msg[i] = getchar();
		if(msg[i] == '\n'){ i--; break; }
	}
	putchar('\n');
	
	for(; i>= 0; i--){ putchar(msg[i]); }
	putchar('\n');
	return 0;
}