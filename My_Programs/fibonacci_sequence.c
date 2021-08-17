#include<stdio.h>

#if _WIN32
	#define IS_WIN	1
	#include<windows.h>
#else
	#define IS_WIN	0
	#include<stdlib.h>
#endif

#define TRUE	1
#define FALSE	0

#define MAX_DIGIT 1000000
#define NUM_END	-1

char *get_user_input(char *user_input);
int array_to_num(char *array);
int fib(char *num_3, const int n);
int add_array(char *num_1, char *num_2, char *num_3);
char *reverse_array(char *array, int length);

int main(){
	
	char num_3[MAX_DIGIT+1];
	char user_input[1000];
	
	int total_length = 0;
	int segment = 0;
	
	printf("Enter the segment of the fibonacci sequence you wish to see.\n");
	printf("Warining: Large numbers may take a bit of time.\n");
	printf("Warning: Largest fibonacci segment digit count is: %d.\n", MAX_DIGIT);
	printf("fibonacci segment: ");
	
	segment = array_to_num(get_user_input(user_input));
	
	if(segment > 1){
		printf("//************************************//\n\n");
		printf("segment: %d\n", segment);
		printf("number of digits: %d\n", total_length = fib(num_3, segment));
		printf("fib sequence: ");
		for(int i = 0; num_3[i] != NUM_END; i++){ printf("%d", num_3[i]); } 
		putchar('\n');
		printf("\n//************************************//\n");
		
	}
	else{
		printf("\n//************************************//\n\n");
		printf("segment: %d\n", segment);
		printf("number of digits: %d\n", 1);
		printf("fib: %d\n", segment > 0 ? 1 : 0);
		printf("\n//************************************//\n");
	}
	
	return 0;
}

/** get user input for segment of the fibanace squence to show. **/
char *get_user_input(char *user_input){
	int i, c;
	
	for(i = 0; ((c = getchar()) != '\n') && c != EOF; i++){ user_input[i] = c; }
	user_input[i] = '\0';		
	
	return user_input;
}
/*******************************************************************/

/** convert the digits in an array to an intager. **/
int array_to_num(char *array){
	int dec_p = 1;
	int num = 0;
	
	int i;
	for(i = 0; array[i] != '\0'; i++);
	for(--i; i >= 0; i--){ num += (array[i]-'0')*dec_p; dec_p *= 10; }
	
	return num;
}
/***************************************************/

/** loop through the fibanace sequence. **/
int fib(char *num_3, const int n){
	char num_1[MAX_DIGIT], num_2[MAX_DIGIT];
	num_1[0] = 0; num_2[0] = 1;
	num_1[1] = num_2[1] = NUM_END;
	
	int total_length;
	for(int i = 0; i < n-1; i++){
		total_length = add_array(num_1, num_2, num_3);
		for(int j = 0; j < total_length; j++){ 
			num_1[j] = num_2[j]; 
			num_2[j] = num_3[j]; 
		}
	}
	
	return total_length-1;
}
/*****************************************/

/** add two numbers using arrays **/
int add_array(char *num_1, char *num_2, char *num_3){
	int carry_one = FALSE;
	
	int num_1_length; for(num_1_length = 0; num_1[num_1_length] != NUM_END; num_1_length++);
	
	int num_2_length; for(num_2_length = 0; num_2[num_2_length] != NUM_END; num_2_length++);
	reverse_array(num_2, num_2_length);
	
	int total_length = (++num_1_length > ++num_2_length) ? num_1_length : num_2_length;
	
	int i;
	for(i = 0; i < total_length-1; i++){
		if(num_1[i] != NUM_END && num_2[i] != NUM_END){ num_3[i] = (num_1[i])+(num_2[i]); }
		else{ 
			if(num_1_length >= num_2_length){ num_3[i] = num_1[i]; }
			else{ num_3[i] = num_2[i]; }
		} 
		if(carry_one){ num_3[i]++; carry_one = FALSE;}
		if(num_3[i] > 9){ carry_one = TRUE; }
		num_3[i] %= 10;
	}
	if(carry_one){ num_3[i] = 1; total_length++; carry_one = FALSE; }
	reverse_array(num_3, total_length-1);

	return total_length;
}
/**********************************/

/** reverse an array **/
char *reverse_array(char *array, int length){
	
	int i, j;
	char temp_array[MAX_DIGIT];
	
	for(i = length-1, j = 0; i >= 0; i--){ temp_array[j] = array[i]; j++; }
	temp_array[j++] = NUM_END;
	for(i = 0; i < j; i++){ array[i] = temp_array[i]; }
	
	return array;
}
/**********************/