#include<stdio.h>

#define MAX_DEC	1000

#define TRUE	1
#define	FALSE	0

int add_array(char *num_1, char *num_2, char *num_3);

char *reverse_array(char *array, int length);
int main(){
	
	char num_1[10];
	char num_2[10];
	char num_3[11];
	
	/** fill num_1 and num_2 arrays with values. **/
	// num_1: 876, num_2: 321.
	num_1[0] = 8, num_2[0] = 3;
	num_1[1] = 7, num_2[1] = 2;
	num_1[2] = 6, num_2[2] = 1;
	num_1[3] = -1, num_2[3] = -1;

	/**********************************************/
	
	int total_length = add_array(num_1, num_2, num_3);

	printf("num_1: ");
	for(int i = 0; num_1[i] != -1; i++){ printf("%d", num_1[i]); } putchar('\n');
	printf("num_2: ");
	for(int i = 0; num_2[i] != -1; i++){ printf("%d", num_2[i]); } putchar('\n');
	printf("num_3: ");
	for(int i = 0; num_3[i] != -1; i++){ printf("%d", num_3[i]); } putchar('\n');
	
	return 0;
}

int add_array(char *num_1, char *num_2, char *num_3){
	int carry_one = FALSE;
	
	int num_1_length; for(num_1_length = 0; num_1[num_1_length] != -1; num_1_length++);
	reverse_array(num_1, num_1_length);
	
	int num_2_length; for(num_2_length = 0; num_2[num_2_length] != -1; num_2_length++);
	reverse_array(num_2, num_2_length);
	
	int total_length = (++num_1_length > ++num_2_length) ? num_1_length : num_2_length;
	
	int i;
	for(i = 0; i < total_length-1; i++){
		if(num_1[i] != -1 && num_2[i] != -1){ num_3[i] = (num_1[i])+(num_2[i]); }
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

char *reverse_array(char *array, int length){
	
	int i, j;
	char temp_array[MAX_DEC];
	
	for(i = length-1, j = 0; i >= 0; i--){ temp_array[j] = array[i]; j++; }
	temp_array[j++] = -1;
	for(i = 0; i < j; i++){ array[i] = temp_array[i]; }
	
	return array;
}































