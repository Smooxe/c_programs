#include<stdio.h>
#include<stdlib.h>
#include"book_info.h"

FILE *fptr;

int main(){
	
	int ctr;
	struct book_info *books[3];
	
	for(ctr=0;ctr<3;ctr++){
		books[ctr] = (struct book_info*)malloc(sizeof(struct book_info));
		
		printf("What is the name of book # %d?\n", (ctr+1));
		gets(books[ctr]->title);
		puts("Who is the author?");
		gets(books[ctr]->author);
		puts("How much did the book cost?");
		putchar('$');
		scanf(" %f", &books[ctr]->price);
		puts("How many pages does the book have?");
		scanf(" %d", &books[ctr]->pages);
		getchar();
	}
	
	fptr = fopen("C:\\c\\book_info.txt", "w");
	if(!fptr){ printf("\nError--File could not be opened.\n"); exit(1); }
	
	fprintf(fptr,"\nHere is the collection of books: \n");
	for(ctr=0;ctr<3;ctr++){
		fprintf(fptr,"# %d: %s by %s", (ctr+1), books[ctr]->title, books[ctr]->author);
		fprintf(fptr,"\nIt has %d pages and cost $%.2f\n\n", books[ctr]->pages, books[ctr]->price);
	}
	fclose(fptr);
	
	return 0;
}























