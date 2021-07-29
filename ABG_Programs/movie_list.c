#include<stdio.h>
#include<string.h>

int main(){
	
	int ctr, num_movies, rating, fav_rating = 0, least_rating = 10;
	char movie_name[40], favorite[40], least[40];
	
	
	do{
		printf("how many movies have you seen this year?\n");
		scanf(" %d", &num_movies);
		
		if(num_movies < 1){ printf("Enter atleast 1 movie.\n"); }
	}while(num_movies < 1);
	
	for(ctr = 1; ctr <= num_movies; ctr++){
		printf("What was the name of the movie?\n");
		scanf(" %s", movie_name);
		printf("On a scale of 1 to 10, what would you rate it?\n");
		scanf(" %d", &rating);
		 
		if(rating > fav_rating){
			strcpy(favorite, movie_name);
			fav_rating = rating;
		}
		if(rating < least_rating){
			strcpy(least, movie_name);
			least_rating = rating;
		}
	}
	
	printf("Your favorite movie was %s.\n", favorite);
	printf("Your least favorite movie was %s.\n", least);
	
	
	return 0;
}