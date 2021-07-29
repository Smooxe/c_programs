#include<stdio.h>
#include<stdlib.h>
#include"book_info.h"

/*** book_info application using a heap array or plastic array EX: 
	 *pointer_variable = (type pointer_variable*)malloc(sizeof type pointer_variable);***/
	int main(){
		int ctr;
		int num = 0;
		struct book_info *books[3];
		
		for(ctr = 0; ctr < 3; ctr++){
			books[ctr] = (struct book_info*)malloc(sizeof(struct book_info));
			printf("**************************************************\n");
			printf("What is the name of book # %d?\n", (ctr+1));
			gets(books[ctr]->title);
			puts("Who is the author? ");
			gets(books[ctr]->author);
			printf("%d\n", ctr);
			puts("How much did the book cost? ");
			putchar('$');
			scanf(" %f", &books[ctr]->price);
			puts("How many pages are in the book? ");
			scanf(" %d", &books[ctr]->pages);
			putchar('\n');
			getchar();
		}
		printf("**************************************************");
		
		printf("\n\nHere is the collection of books: \n");
		printf("**************************************************\n");
		for(ctr = 0; ctr < 3; ctr++){
			
			printf("book # %d: %s by %s", (ctr+1), books[ctr]->title, books[ctr]->author);
			printf("\nIt has %d pages and costs $%.2f", books[ctr]->pages, books[ctr]->price);
			putchar('\n');
		}
		printf("**************************************************\n\n");
		
		free(p_num_books);
		return 0;
	}
	 


/*** book_info application using a static array EX: "array_variable[array_size];***/
/*
int main(){
	
	int ctr;
	struct book_info books[3];
	
	for(ctr = 0; ctr < 3; ctr++){
		printf("\nWhat is the name of book #%d?\n", (ctr+1));
		gets(books[ctr].title);
		puts("Who is the author? ");
		gets(books[ctr].author);
		puts("How much did the book cost? ");
		scanf(" %f", &books[ctr].price);
		puts("How many pages are in the book? ");
		scanf(" %d", &books[ctr].pages);
		getchar();
	}
	
	printf("\n\nHere is the collection of books: \n");
	for(ctr = 0; ctr < 3; ctr++){
		printf("%d: %s by %s", (ctr+1), books[ctr].title, books[ctr].author);
		printf("\nIt has %d pages and costs $%.2f", books[ctr].pages, books[ctr].price);
		printf("\n\n");
	}
	
	return 0;
}
*/






















