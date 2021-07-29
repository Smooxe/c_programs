#include<stdio.h>
#include<stdlib.h>

#define MAX_CHARS	100000

char *get_user_input(char *user_input);
int size_of_string(char *string);
int alloc(char char_storage[], int total_length);
void item_list(char *item_names[], char *item_upcs[], int i);

int main(){
	
	//char name_database[MAX_CHARS];
	char upc_database[MAX_CHARS];
	
	char *item_names[200];
	char *item_upcs[200];
	
	char list_size[6];
	
	
	int i;
	int num_items = 0;
	
	/** ask user for number of items in the list. **/
	system("clear");
	printf("Enter number of items in the list: ");
	
	int dec_pos = 1;
	i = size_of_string(get_user_input(list_size));
	printf("list_size: %s\n", list_size);
	
	for(i--; i >= 0; i--){
		num_items += (list_size[i]-'0') * dec_pos;
		dec_pos *= 10;
	}
	printf("num_items: %d\n", num_items);
	/***********************************************/
	/** save item name to a data base array. **/
	item_list(item_names, item_upcs, num_items);
	/******************************************/
	
	/** compare user input to list. **/
	char item_comp[50];
	int is_match = 0;
	
	system("clear");
	printf("Enter item name to compare with list:\n");
	while(get_user_input(item_comp)[0] != '!'){
		system("clear");
		printf("Enter item name to compare with list:\n");
		for(i = 0; i < num_items; i++){		
			for(int j = 0; item_comp[j] != '\0'; j++){				
				if(*(item_names[i]+j) == item_comp[j]){ is_match = 1; }
				else{ is_match = 0; }
			}
			if(is_match){ printf("#%d: item_name: %s, item_upc: %s\n",i+1, item_names[i], item_upcs[i]); }
			else{ printf("No match found\n"); }
		}
	}
	/*********************************/
	
	/** print out test for char arrays. **/
	for(i = 0; i < num_items; i++){ printf("#%3d item_name: %s, item_upc: %s\n", i+1, item_names[i], item_upcs[i]); }
	putchar('\n');
	/************************************/
	return 0;
}

char *get_user_input(char *user_input){
	int i, c;
	
	for(i = 0; ((c = getchar()) != '\n') && c != EOF; i++){ user_input[i] = c; }
	if(c == '\n'){ c = '\0'; user_input[i] = c;}	
	
	return user_input;
}

int size_of_string(char *string){
	int i;
	for(i = 0; string[i] != '\0'; i++);
	
	return i;
}

int alloc(char char_storage[], int total_length){
	
	char item_name[500];
	int current_length = 0;
	int i, j;
	
	get_user_input(item_name);
	for(current_length = 0; item_name[current_length] != '\0'; current_length++);
	total_length += current_length;
	for(i = total_length-current_length, j = 0; (char_storage[i] = item_name[j]) != '\0'; i++, j++);
	char_storage[i] ='\0';
	total_length++;
	
	return total_length;
}

void item_list(char *item_names[], char *item_upcs[], int n){
	char name_database[MAX_CHARS];
	char upc_database[MAX_CHARS];
	
	int total_name_length = 0, name_size = 0;
	int total_upc_length = 0, upc_size = 0;
	int i;
	for(i = 0; i < n; i++){
		system("clear");
		printf("Enter the items in the list.\n");
		
		printf("item_name: ");
		name_size = alloc(name_database, total_name_length);
		item_names[i] = &name_database[total_name_length];
		total_name_length = name_size;
		
		printf("item_upc: ");
		upc_size = alloc(upc_database, total_upc_length);
		item_upcs[i] = &upc_database[total_upc_length];
		total_upc_length = upc_size;
	}
}