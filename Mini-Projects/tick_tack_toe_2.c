#include <stdio.h>

char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

void displayBoard()
{
    printf("\n");
    printf(" %c | %c | %c\n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[7], board[8], board[9]);
    printf("\n");
}

int checkWin()
{
    if(board[1]==board[2] && board[2]==board[3]) return 1;
    if(board[4]==board[5] && board[5]==board[6]) return 1;
    if(board[7]==board[8] && board[8]==board[9]) return 1;

    if(board[1]==board[4] && board[4]==board[7]) return 1;
    if(board[2]==board[5] && board[5]==board[8]) return 1;
    if(board[3]==board[6] && board[6]==board[9]) return 1;

    if(board[1]==board[5] && board[5]==board[9]) return 1;
    if(board[3]==board[5] && board[5]==board[7]) return 1;

    return 0;
}

int draw()
{
    int i;
    for(i=1;i<=9;i++)
    {
        if(board[i]!='X' && board[i]!='O')
            return 0;
    }
    return 1;
}

void computerMove()
{
    int i;
    for(i=1;i<=9;i++)
    {
        if(board[i]!='X' && board[i]!='O')
        {
            board[i]='O';
            printf("Computer chooses %d\n", i);
            break;
        }
    }
}

int main()
{
    int pos;

    printf("TIC TAC TOE\n");
    displayBoard();

    while(1)
    {
        // Computer Move
        computerMove();
        displayBoard();

        if(checkWin())
        {
            printf("Computer Wins!\n");
            break;
        }

        if(draw())
        {
            printf("Match Draw!\n");
            break;
        }

        // User Move
        do
        {
            printf("Enter your move (1-9): ");
            scanf("%d",&pos);

            if(pos<1 || pos>9 || board[pos]=='X' || board[pos]=='O')
                printf("Invalid Move! Try Again.\n");

        }while(pos<1 || pos>9 || board[pos]=='X' || board[pos]=='O');

        board[pos]='X';

        displayBoard();

        if(checkWin())
        {
            printf("User Wins!\n");
            break;
        }

        if(draw())
        {
            printf("Match Draw!\n");
            break;
        }
    }

    return 0;
}