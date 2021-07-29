#include<stdio.h>

int main(){
	
	int game_scores[10] = {12, 5, 21, 15, 32, 10};
	int total_points = 0;
	int i;
	float avg;
	
	for(i = 6; i < 10; i++){
		printf("What did the player score in game %d? ", i+1);
		scanf(" %d", &game_scores[i]);
	}
	
	for(i = 0; i < 10; i++){ total_points += game_scores[i]; }
	
	avg = ((float)total_points/10);
	printf("\n\nThe player's scoring average is %.1f.\n", avg);
	
	return 0;
}