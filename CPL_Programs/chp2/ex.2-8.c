#include<stdio.h>

int word_length();

int main(){
	
	int bit = 106;
	int rbit;
	int n = 3;
	
	printf("bit: %d\n", bit);
	while(n-->0){
		rbit = (bit&1)<<(word_length-1);
		bit = bit>>1;
		bit = bit|rbit;
	}
	printf("bit: %d\n", bit);
	return 0;
}

int word_length(){
	int i;
	unsigned int v = (unsigned)~0;
	for(i = 1; (v = v>>1)>0; i++);
	return i;
}