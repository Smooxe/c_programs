#include<stdio.h>

int main(){
	
	int num_pick;
	
	printf("Pick a number from 1 to 10.\n");
	scanf(" %d", &num_pick);
	
	printf("%d %s divisible by 2\n", num_pick, (num_pick%2==0)?("is"):("is not"));
	printf("%d %s divisible by 3\n", num_pick, (num_pick%3==0)?("is"):("is not"));
	printf("%d %s divisible by 4\n", num_pick, (num_pick%4==0)?("is"):("is not"));
	printf("%d %s divisible by 5\n", num_pick, (num_pick%5==0)?("is"):("is not"));
	printf("%d %s divisible by 6\n", num_pick, (num_pick%6==0)?("is"):("is not"));
	printf("%d %s divisible by 7\n", num_pick, (num_pick%7==0)?("is"):("is not"));
	printf("%d %s divisible by 8\n", num_pick, (num_pick%8==0)?("is"):("is not"));
	printf("%d %s divisible by 9\n", num_pick, (num_pick%9==0)?("is"):("is not"));
	return 0;
}