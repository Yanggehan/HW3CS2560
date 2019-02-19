/*
 * task3.c
 *
 *  Created on: 2019年2月17日
 *      Author: 111111
 */


#include <stdio.h>
#include <conio.h>
int checkwin();
void board();
char square[10] = { '*', '*', '*', '*', '*', '*', '*', '*', '*', '*' };
int main(){
int player = 1, i, choice;

char mark;
do
{
    board();
    player = (player % 2) ? 1 : 2;

    printf("Player %d, enter a number(row and colunm):  ", player);
    fflush(stdout);
    scanf("%d", &choice);

    mark = (player == 1) ? 'X' : 'O';

    if (choice == 11 && square[1] == '*')
        square[1] = mark;

    else if (choice == 12 && square[2] == '*')
        square[2] = mark;

    else if (choice == 13 && square[3] == '*')
        square[3] = mark;

    else if (choice == 21 && square[4] == '*')
        square[4] = mark;

    else if (choice == 22 && square[5] == '*')
        square[5] = mark;

    else if (choice == 23 && square[6] == '*')
        square[6] = mark;

    else if (choice == 31 && square[7] == '*')
        square[7] = mark;

    else if (choice == 32 && square[8] == '*')
        square[8] = mark;

    else if (choice == 33 && square[9] == '*')
        square[9] = mark;

    else
    {
        printf("Invalid move ");

        player--;
        //getch();
    }
    i = checkwin();

    player++;
}while (i ==  - 1);

board();

if (i == 1){
    printf("==>\aPlayer %d win ", --player);}
else{
    printf("==>\aGame draw");
}
//getch();

return 0;
}
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3] &&square[1]!= '*'&&square[2]!= '*'&&square[3]!= '*'){
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6]&&square[4]!= '*'&&square[5]!= '*'&&square[6]!= '*'){
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9]&&square[7]!= '*'&&square[8]!= '*'&&square[9]!= '*'){
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7]&&square[1]!= '*'&&square[4]!= '*'&&square[7]!= '*'){
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8]&&square[2]!= '*'&&square[5]!= '*'&&square[8]!= '*'){
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9]&&square[3]!= '*'&&square[6]!= '*'&&square[9]!= '*'){
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9]&&square[1]!= '*'&&square[5]!= '*'&&square[9]!= '*'){
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7]&&square[3]!= '*'&&square[5]!= '*'&&square[7]!= '*'){
        return 1;
    }
    else if (square[1] != '*' && square[2] != '*' && square[3] != '*' &&square[4] != '*' && square[5] != '*' && square[6] != '*' && square[7] != '*' && square[8] != '*' && square[9] != '*')
    {
        return 0;}
    else{
        return  - 1;}
}
void board()
{
    //system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}


