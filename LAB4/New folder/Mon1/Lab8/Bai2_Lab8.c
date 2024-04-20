#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>


// Ham  tao giao dien
void displayBoard();
// Ham danh dau X hay O vao cac o
void markBoard(char mark);
// Ham kiem tra chien thang
int checkForWin();


char square[10] = { ' ','1','2','3','4','5','6','7','8','9' };
int player, choice;
int main()
{
    char mark;
    int gameStatus;
    player = 0;
    displayBoard();
    do
    {
        player++;
        player = (player % 2) ? 1 : 2;   // Doi luot nguoi choi


        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);       // chon o de choi

        mark = (player == 1) ? 'X' : 'O';
        markBoard(mark);
        displayBoard();
        gameStatus = checkForWin();

    } while (gameStatus == -1);
    if (gameStatus == 1)
        printf("==>\aPlayer %d win ", player);
    else
        printf("==>\aGame draw");
    return 0;
}

// Ham hien thi giao dien
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
// Ham hien thi
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

// Ham kiem tra chien thang
int checkForWin()
{
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
        returnValue = 1;

    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;

    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;

    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;

    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;

    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;

    if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;

    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}





