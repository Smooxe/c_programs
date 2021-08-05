#include<stdio.h>
#include<limits.h>

int main(){
	printf("unsigned_char_min: %d\n", 0);
	printf("unsigned_char_max: %d\n", UCHAR_MAX);
	
	printf("signed_char_min: %d\n", SCHAR_MIN);
	printf("signed_char_max: %d\n", SCHAR_MAX);
	
	printf("unsigned_int_min: %d\n", 0);
	printf("unsigned_int_max: %ld\n", UINT_MAX);
	
	printf("signed_int_min: %d\n", INT_MIN);
	printf("signed_int_max: %d\n", INT_MAX);
	
	return 0;
}