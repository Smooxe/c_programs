#include<stdio.h>
#include<string.h>

void printd(int n);
void reverse_array(char s[], int array_length, int inc);

int main(){
	
	//printd(5431);
	
	char name[] = "jona";
	//printf("name: %s, length: %ld\n", name, strlen(name));
	//printf("array_length: %d\n", reverse_array(name, strlen(name)-1));
	reverse_array(name, strlen(name)-1, 0);
	printf("name: %s\n", name);
	return 0;
}

void printd(int n){
	if(n < 0){
		putchar('-');
		n = -n;
	}
	if((n/10) != 0){ printd(n/10); }
	printf("n: %d\n", n);
	//putchar(n%10+'0');
}

void reverse_array(char s[], int array_length, int inc){
	if(array_length != 0){ reverse_array(s, array_length-1, inc+1); }
	if(array_length > inc){ s[inc] = s[array_length]; }
	//return array_length;
}