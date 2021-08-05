#include<stdio.h>

void escape(char to[], char from[]);
void r_escape(char to[], char from[]);
int main(){
	
	char c;
	char user_input_array[1000];
	char new_array[1000];
	
	int i, j;
	i = j = 0;
	while((c = getchar()) != EOF){ user_input_array[i++] = c; }
	user_input_array[i] = '\0';
	
	escape(new_array, user_input_array);
	printf("user_input_array: %s\n", user_input_array);
	printf("new_array: %s\n\n", new_array);
	
	r_escape(user_input_array, new_array);
	printf("new_array: %s\n", new_array);
	printf("user_input_array: %s\n", user_input_array);
	
	return 0;
}

void escape(char to[], char from[]){
	
	int i, j;
	
	j = i = 0;
	while(from[i] != '\0'){
		switch(from[i]){
			case '\t': to[j++] = '\\'; to[j] = 't';
				break;
			case '\n': to[j++] = '\\'; to[j] = 'n';
				break;
			case ' ': to[j] = '_';
				break;
			default: to[j] = from[i];
				break;
		}
		i++; j++;
	}
	to[j] = '\0';
}

void r_escape(char to[], char from[]){
	
	int i, j;
	
	j = i = 0;
	while(from[i] != '\0'){
		switch(from[i]){
			case '\\':
				switch(from[i+1]){
					case 't': to[j] = '\t'; i++;
						break;
					case 'n': to[j] = '\n'; i++;
						break;
				}
				break;
			case '_': to[j] = ' ';
				break;
			default: to[j] = from[i];
				break;
		}
		i++; j++;
	}
	to[j] = '\0';
}









































