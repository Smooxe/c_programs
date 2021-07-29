#include<stdio.h>
#include<stdlib.h>

#define TRUE	1
#define FALSE	0

/***************************************************************************/
void greet_players();
void draw_grid(int loc, char cur_player, char point[]);
char swap_player(char *cur_player, int *is_turn);
char player_loc();
int check_win(char point[]);
/***************************************************************************/

int main(){
	int i;
	int is_turn;
	int loc = 0;
	char point[9];
	char cur_player;

	
	system("cls This is a Font test int a = 430; ");
	greet_players(); //greet players.
	for(i = 0; i < 9; i++){ point[i] = '_'; }// set the point array to '_'.
	is_turn = TRUE;	  // set the first turn to true.
	cur_player = 'X'; // set the first player before the grid is printed.
	
	while(!check_win(point)){
		swap_player(&cur_player, &is_turn); // change player for the next loop.
		if(is_turn == TRUE){ is_turn = FALSE; }
		draw_grid(loc, cur_player, point); // prints the tic tac toe grid.
	}
	
	return 0;
}
/***************************************************************************/

// Function prints out a greeting to players.
void greet_players(){	
	puts("***************************************************************************************************");
	puts("Hello this is tic tac toe.");
	puts("The rules are simple: ");
	puts("#1 two players each take turns placeing their pieces (X,O) on a 3x3 grid.");
	puts("#2 when a player has placed three pieces in either a horizontal,vertical, or diagonal row they win.");
	puts("#3 and thats it, have fun.");
	puts("***************************************************************************************************\n");
	// print the first grid empty
	puts("*Tic_Tac_Toe.*");
	puts("*  |1|2|3|   *");
	puts("*  |4|5|6|   *");
	puts("*  |7|8|9|   *");
	puts("**************");
}
/***************************************************************************/

// Function draws grid.
void draw_grid(int loc, char cur_player, char point[]){
	int i, j, p = -1;
	
	p = player_loc();
	switch(p){
		case 49: p = 0; break;
		case 50: p = 1; break;
		case 51: p = 2; break;
		case 52: p = 3; break;
		case 53: p = 4; break;
		case 54: p = 5; break;
		case 55: p = 6; break;
		case 56: p = 7; break;
		case 57: p = 8; break;
		default: p = -1; break;
	}
	system("cls");
	greet_players();
	puts("*Tic_Tac_Toe.*");
	if(point[(p)] == '_'){
		point[p] = cur_player;
		for(i = 0; i < 3; i++){
			printf("*  ");
			for(j = 0; j < 3; j++){
				printf("|%c", point[loc]);
				loc++;
			}
			puts("|   *");
		}
		puts("**************");
	}
	else{ puts("\nSpace invalid,please choose an empty Location('_')."); }
}
/***************************************************************************/

// Function gets the current players inputed locition.
char player_loc(){
	char player_loc = -1;
	scanf(" %c", &player_loc);

	if(player_loc >= '1' && player_loc <= '9' ){ return (player_loc); }
	else{ return (-1); }
}
/***************************************************************************/

// Function changes player icon to the next icon when the current player inputs their location.
char swap_player(char *cur_player, int *is_turn){
	if(*cur_player == 'X' && *is_turn == FALSE){ 
		*cur_player = 'O';
		*is_turn = TRUE;
	}
	if(*cur_player == 'O' && *is_turn == FALSE){ 
		*cur_player = 'X';
		*is_turn = TRUE;
	}
	
	return (*cur_player);
}
/***************************************************************************/

// Function tests to see if a winning pattern is true, or if it is a tie.
int check_win(char p[]){

	// Tie.
	if(p[0] != '_' && p[1] != '_' && p[2] != '_' &&
	   p[3] != '_' && p[4] != '_' && p[5] != '_' &&
	   p[6] != '_' && p[7] != '_' && p[8] != '_'){ printf("It is a tie.\n"); return (TRUE); }
	
	// Horizontal victory's.
	if		(p[0] == p[1] && p[1] == p[2] &&
			 p[0] != '_' && p[1] !='_' && p[2] != '_'){ printf("player: %c is the winner!!!\n", p[0]); return (TRUE); }
	else if	(p[3] == p[4] && p[4] == p[5] &&
			 p[3] != '_' && p[4] !='_' && p[5] != '_'){ printf("player: %c is the winner!!!\n", p[3]); return (TRUE); }
	else if	(p[6] == p[7] && p[7] == p[8] &&
			 p[6] != '_' && p[7] !='_' && p[8] != '_'){ printf("player: %c is the winner!!!\n", p[6]); return (TRUE); }
	
	// Vertical victory's.
	if		(p[0] == p[3] && p[3] == p[6] &&
			 p[0] != '_' && p[3] !='_' && p[6]){ printf("player: %c is the winner!!!\n", p[0]); return (TRUE); }
	else if	(p[1] == p[4] && p[4] == p[7] &&
			 p[1] != '_' && p[4] !='_' && p[7]){ printf("player: %c is the winner!!!\n", p[1]); return (TRUE); }
	else if	(p[2] == p[5] && p[5] == p[8] &&
			 p[2] != '_' && p[5] !='_' && p[8]){ printf("player: %c is the winner!!!\n", p[2]); return (TRUE); }
	
	// Diagonal victory's
	if		(p[0] == p[4] && p[4] == p[8] &&
			 p[0] != '_' && p[4] !='_' && p[8]){ printf("player: %c is the winner!!!\n", p[0]); return (TRUE); }
	else if	(p[2] == p[4] && p[4] == p[6] &&
			 p[2] != '_' && p[4] !='_' && p[6]){ printf("player: %c is the winner!!!\n", p[2]); return (TRUE); }
			 
	else{ return (FALSE); }
}
/***************************************************************************/























