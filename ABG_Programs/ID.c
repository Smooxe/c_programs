#include<stdio.h>

int main(){
	
	int ctr;
	int id_search;
	int found = 0;
	
	int cust_id[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
	float cust_bal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};
	
	printf("\n\n*** Customer balance lookup ***\n");
	printf("What customer number do you need to check? ");
	scanf(" %d", &id_search);
	
	for(ctr = 0; ctr < 10; ctr++){ if(id_search == cust_id[ctr]){ found = 1; break; } }
	
	if(found){
		if(cust_bal[ctr] > 100.00){
			printf("\n** The balance is $%.2f.\n", cust_bal[ctr]);
			printf("No additional credit.\n");
		}else{ printf("\n** The customers credit is good.\n"); }
	}else{
		printf("** You must have typed an incorrect customer ID.\n");
		printf("	ID %3d was not found in list.\n", id_search);
	}
	
	return 0;
}