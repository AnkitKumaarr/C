#include<stdio.h>
#include<conio.h>
void main(){

	int i,j,pos,value,flag=0;
	char mat[9] = {'_','_','_','_','_','_','_','_','_'};
	clrscr();
	// printing blank TICTACTOE BOARD
	printf("\t\tTICTACTOE \n");
	for(j =0;j<9;j++){
		printf("%c\t",mat[j]);
			if(j==2 || j==5){
				printf("\n");
			}
		}
	printf("\n");

	for(i =1;i<=9;i++){
		if(i%2 !=0){
			printf("\n\n\nPLAYER 1:- ");
			scanf("%d",&pos);
			}
		if(i%2==0){
			printf("\n\n\nPLAYER 2:- ");
			scanf("%d",&pos);
		}
		// Exit game
		if(pos == 0){
			exit(1);
			}
		// Values more than 9
		if(pos>9){
			printf("\nPlease Enter Valid Position of board b/w 1 to 9");
			i--;
			continue;

		}
		value = pos-1;            // decrementing to array index

		if(mat[value] == '_'){
			for(j =0;j<9;j++){
				if(i%2!=0){
					mat[value] = 'x';
					}
				if(i%2==0){
					mat[value] = 'o';
					}
				printf("%c\t",mat[j]);

				if(j==2 || j==5){
					printf("\n");
				}
			}
		}
		else{
			printf("\nValues Already Exist");
			i--;
			continue;
		}

		if(mat[value] !='_'){
			// ROW CHECKING
			for(j =0;j<9;j++){
				if(mat[j] == mat[j+1] && mat[j+1] == mat[j+2]){
				     if(mat[j] == 'x'){flag =1;}
				     if(mat[j] == 'o'){flag =2;}
				}
				j = j+2;               // because it has to check only rows
			}
			// Column Checking
			for(j =0;j<3;j++){
				if(mat[j]== mat[j+3]  && mat[j+3] == mat[j+6]){
				     if(mat[j] == 'x'){flag =1;}
				     if(mat[j] == 'o'){flag =2;}
				}
			}

			//Left Diagonal Checking
			if(mat[0]!='_' && mat[0] == mat[4]&& mat[4] == mat[8]){
				if(mat[0] == 'x'){flag =1;}
				if(mat[0] == 'o'){flag =2;}
			}
			//Right Diagonal Checking
			if(mat[2]!='_' && mat[2] == mat[4]&& mat[4] == mat[6]){
				if(mat[2] == 'x'){flag =1;}
				if(mat[2] == 'o'){flag =2;}
			}
		}
		// breaks the game when values are matched in thrice continuously
		if(flag == 1 || flag ==2){
			break;
		}
	}
	if(flag == 1){printf("\n\n\n *********     PLAYER 1 WIN    ********");}
	if(flag == 2){printf("\n\n\n *********     PLAYER 2 WIN    ********");}
	if(flag == 0){printf("\n\n\n *********	   Game DRAW	   ********");}

	getch();
  }
