#include<stdio.h>

int main(){
	
	int ctr;
	int id_search;
	int found = 0;
	
	int cust_id[5] = {313, 453, 502, 101, 892};
	float cust_bal[5] = {0.00, 45.43, 71.23, 301.56, 9.08};
	
	int temp_id, inner, outer, did_swap, i;
	float temp_bal;
	
	
/**********Sort customer id and balance**********/
	for(outer = 0; outer < 4; outer++){
		did_swap = 0;
		for(inner = outer; inner < 5; inner++){
			if(cust_id[inner] < cust_id[outer]){
				temp_id = cust_id[inner];
				temp_bal = cust_bal[inner];
				
				cust_id[inner] = cust_id[outer];
				cust_bal[inner] = cust_bal[outer];
				cust_id[outer] = temp_id;
				cust_bal[outer] = temp_bal;
				did_swap = 1;
			}
		}
		
		if(did_swap == 0){ break; }
	}
/************************************************/
	
/****Interact with customer and print their balance****/
	printf("\n\n***Cutomer Balance Lookup***\n");
	printf("What is the customer number? ");
	scanf(" %d", &id_search);
	
	for(ctr = 0; ctr < 5; ctr++){
		if(id_search == cust_id[ctr]){ found = 1; break; }
		if(cust_id[ctr] > id_search){ break; }
	}
	
	if(found){
		printf("\n** That customer's balance is $%.2f. **\n", cust_bal[ctr]);
		if(cust_bal[ctr] > 100){ printf("No additional credit.\n"); }
		else{ printf("\n** The customer's credit is good! **\n"); }
	}
	else{
		printf("** You have entered an incorrect cutomer ID.");
		printf("\n ID %d was not found in the list.\n", id_search);
	}
/******************************************************/
	return 0;
}



















