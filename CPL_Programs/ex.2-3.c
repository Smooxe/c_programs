#include<stdio.h>
#include<string.h>

void reverse_array(char array[]);
int ctoi(char hex_num);
int pwr();
int htod(char hex_num_array[]);

int main(){
	char hex_num_array[100] = "12AF";
	int dec_num = 0;
	
	printf("hex_num: 0x%s\n", hex_num_array);
	dec_num = htod(hex_num_array);
	printf("dec_num: %d\n", dec_num);
	
	return 0;
}

/** reverse the values in an array **/
void reverse_array(char array[]){
	char c;
	int i, j;
	for(i = strlen(array)-1, j = 0; i > j; --i, ++j){
		c = array[j];
		array[j] = array[i];
		array[i] = c;
	}
}
/************************************/

/** convert a char variable into its int value ex 'a' = 97 **/
int ctoi(char hex_num){
	if(hex_num-'A' >= 0 && hex_num-'A' <= 15){ return (hex_num-'A')+10; }
	else{ return (hex_num-'0'); }
}
/************************************************************/

/** calculate the value of 16* the power of i **/
int pwr(int i){
	int pwr = 1;
	for(int j = 0; j < i; ++j){ pwr *= 16; }
	return pwr;
}
/***********************************************/

/** convert the hex string value into a decimal value **/
int htod(char hex_num_array[]){
	int result = 0;
	
	reverse_array(hex_num_array);
	for(int i = 0; i < strlen(hex_num_array); ++i){ result += ctoi(hex_num_array[i])*pwr(i); }
	
	return result;
}
/*******************************************************/















