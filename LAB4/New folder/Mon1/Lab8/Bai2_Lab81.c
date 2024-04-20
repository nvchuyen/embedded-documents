#include <stdio.h>
#include <stdlib.h>

// Ham  tao giao dien
void displayBoard();
// Ham danh dau X hay O vao cac o
void markBoard(char mark);
// Ham kiem tra chien thang
int checkForWin();


char square[10] = { ' ','1','2','3','4','5','6','7','8','9' };
int player, choice;

void displayBoard()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X) - Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("     |     |     \n");

}

void markBoard(char mark)
{
    _Bool check_move = 0;
    for (int i = 1; i <= 9; i++)
    {
        if (choice == i && square[i] == ('0' + i))
        {
            square[i] = mark;
            check_move = 1;
        }
    }
    if (!check_move)
    {
        printf("Invalid move, Enter to continue.");
        player--;
        getch();
    }
}

int main()
{

}