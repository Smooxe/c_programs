#include<stdio.h>

int main(){
	
	int c;
	int blank, tab, nl;
	nl = tab = blank = 0;
	
	while((c = getchar()) != EOF){
		if(c == ' '){ ++blank; }
		if(c == '\t'){ ++tab; }
		if(c == '\n'){ ++nl; }
	}
	
	printf("blanks: %d, tabs: %d, new lines: %d\n", blank, tab, nl);
	
	return 0;
}