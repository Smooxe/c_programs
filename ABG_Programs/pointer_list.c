#include<stdio.h>
#include<ctype.h>

int main(){
/***base variables***/
	int i;
	int ctr = 0;
	char ans;
/********************/
/***array variables***/
	char *movie[9] = {"Amour", "argo", "Beast of the Southern Wild",
					   "Django Unchained", "Les Miserables", "Life of Pi",
					   "Lincoln", "Silver Linings Playbook", "Zero Dark Thirty"};
	int movie_rating[9];
	char *temp_movie = "This will be used to sort rated movies.";
/*********************/
/***loop variables***/
	int outer, inner, did_swap, temp_rating;
/********************/
/***rating movies***/
	printf("\n\n*** Oscer Season 2012 is here! ***\n\n");
	printf("Time to rate this year's best picture nominees: ");

	for(i = 0; i < 9; i++){
		printf("\nDid you see %s? (Y/N): ", movie[i]);
		scanf(" %c", &ans);
		switch(toupper(ans)){
			case('Y'):	printf("\nWhat was you rating from 1/10: ");
						scanf(" %d", &movie_rating[i]);
						ctr++;
						break;
			default:	movie_rating[i] = -1;
						break;
		}
	}
/*******************/
/***sorting movies from best to worst***/
	for(outer = 0; outer < 8; outer ++){
		did_swap = 0;
		for(inner = outer; inner < 9; inner++){
			if(movie_rating[inner] > movie_rating[outer]){
				temp_movie = movie[inner];
				temp_rating = movie_rating[inner];
				movie[inner] = movie[outer];
				movie_rating[inner] = movie_rating[outer];
				movie[outer] = temp_movie;
				movie_rating[outer] = temp_rating;
				did_swap = 1;
			}
		}
		if(did_swap == 0){ break; }
	}
/***************************************/
/***print resaults onto the screen***/
	printf("\n\n** Your Movie Ratings for the 2012 Oscer Contenders **\n\n");
	for(i = 0; i < ctr; i++){ printf("%s rated a %d!\n", movie[i], movie_rating[i]); }
/************************************/
	return 0;
}





















