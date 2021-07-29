#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int i, a_size;
	int *p_rand_num;
	time_t t;
	double total = 0;
	int biggest, smallest;
	float avg;
	
	srand(time(&t));
	
	printf("How many random numbers do you want in your array? ");
	scanf(" %d", &a_size);
	
	p_rand_num = (int*)malloc(a_size*sizeof(int));
	if(!p_rand_num){ printf("\n\nNot Enough Memory!\n\n"); exit(1); }
	
	for(i=0;i<a_size;i++){ 
		p_rand_num[i] = (rand()%500)+1; 
		printf("\n%d", p_rand_num[i]);
	}
	
	biggest = 0;
	smallest = 500;
	
	for(i=0; i<a_size;i++){
		total += p_rand_num[i];
		if(p_rand_num[i] > biggest){ biggest = p_rand_num[i]; }
		if(p_rand_num[i] < smallest){ smallest = p_rand_num[i]; }
	}
	
	avg = ((float)total/(float)a_size);
	printf("\n\nThe biggest number is: %d.", biggest);
	printf("\nThe smallest number is: %d.", smallest);
	printf("\nThe average of all numbers is : %.2f", avg);
	
	free(p_rand_num);
	
	return 0;
} 












