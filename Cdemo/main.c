#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    *   'counter' IS RESPONSIBLE FOR ALLOWING EACH PLAYER MAKE THEIR MOVE.
    *   'flag' HELPS TO CHECK WHETHER THEIR IS AN WINNER OR NOT. IF THERE IS ANY WINNER IT'S VALUE IS SET TO 1.
    *   'von' HELPS TO CHECK WHETHER ANY MMOVE THAT ANY PLAYER HAS MADE IS VALID OR NOT.
    */
    int i, j, row, col, turn = 0, counter = 0, x, y, xCord, yCord, flag = 0, von = 0;
    char a[3][3];

    // INITIAL STATE
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = ' ';
        }
    }

    void makeMove()
    {
        if (turn % 2 == 0)
        {
            do
            {
                printf("Player %c, enter the x coordinate (1-3): ", 'X');
                scanf("%d", &x);
                printf("\nPlayer %c, enter the y coordinate (1-3): ", 'X');
                scanf("%d", &y);
                if (x > 0 && x < 4 && y > 0 && y < 4)
                {
                    if (a[x-1][y-1] != ' ')
                    {
                        printf("\nInvalid move! This place is already taken. Try again.\n");
                        von = 1;
                    }
                    else
                    {
                        a[x-1][y-1] = 'X';
                        break;
                    }
                    if (flag == 1)
                    {
                        break;
                    }
                }
                else
                {
                    printf("\nInvalid move! Try again.\n");
                    von = 1;
                }

            }
            while(von == 1);

            // CHEKCING FOR WINNER
            for (xCord = 0; xCord < 3; xCord++)
            {
                if (a[xCord][0] == a[xCord][1] && a[xCord][0] == a[xCord][2] && a[xCord][0] == 'X')
                {
                    printf("\n\tThe winner is player 'X'!");
                    flag = 1;
                }
            }
            for (yCord = 0; yCord < 3; yCord++)
            {
                if (a[0][yCord] == a[1][yCord] && a[1][yCord] == a[2][yCord] && a[0][yCord] == 'O')
                {
                    printf("\n\tThe winner is player 'O'!");
                    flag = 1;
                }
            }
            if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] == 'X')
            {
                printf("\n\tThe winner is player 'X'!");
                flag = 1;
            }
            else if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] == 'O')
            {
                printf("\n\tThe winner is player 'O'!");
                flag = 1;
            }
            if (a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[0][2] == 'X')
            {
                printf("\n\tThe winner is player 'X'!");
                flag = 1;
            }
            else if (a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[0][2] == 'O')
            {
                printf("\n\tThe winner is player 'O'!");
                flag = 1;
            }

        }
        else if (turn % 2 == 1)
        {
            do
            {
                printf("Player %c, enter the x coordinate (1-3): ", 'O');
                scanf("%d", &x);
                printf("\nPlayer %c, enter the y coordinate (1-3): ", 'O');
                scanf("%d", &y);
                if (x > 0 && x < 4 && y > 0 && y < 4)
                {
                    if (a[x-1][y-1] != ' ')
                    {
                        printf("\nInvalid move! This place is already taken. Try again.\n");
                        von = 1;
                    }
                    else
                    {
                        a[x-1][y-1] = 'O';
                        break;
                    }
                    if (flag == 1)
                    {
                        break;
                    }
                }
                else
                {
                    printf("\nInvalid move! Try again.\n");
                    von = 1;
                }
            }
            while(von == 1);

            // CHECKING FOR WINNER
            for (xCord = 0; xCord < 3; xCord++)
            {
                if (a[xCord][0] == a[xCord][1] && a[xCord][0] == a[xCord][2] && a[xCord][0] != ' ')
                {
                    printf("\n\tThe winner is player '%c'!\n\n", a[xCord][0]);
                    flag = 1;
                }
            }
            for (yCord = 0; yCord < 3; yCord++)
            {
                if (a[0][yCord] == a[1][yCord] && a[1][yCord] == a[2][yCord] && a[0][yCord] != ' ')
                {
                    printf("\n\tThe winner is player '%c'!\n\n", a[0][yCord]);
                    flag = 1;
                }
            }
            if (a[0][0] == a[2][2] && a[0][0] == a[1][1] && a[0][0] != ' ')
            {
                printf("The winner is player '%c'!\n\n", a[0][0]);
                flag = 1;
            }
            if (a[0][2] == a[2][2] && a[0][2] == a[3][0] && a[0][2] != ' ')
            {
                printf("The winner is player '%c'!\n\n", a[0][0]);
                flag = 1;
            }

        }
        turn++;
    }

    void duBoard()
    {
        for (row = 0; row < 3; row++)
        {
            for (col = 0; col < 3; col++)
            {
                printf("   %c", a[row][col]);
                if (col == 0 || col == 1)
                {
                    printf("\t|");
                }
            }
            printf("\n");
            if (row == 0 || row == 1)
            {
                printf("-------------------------\n");
            }
        }
    }

    do
    {
        duBoard();
        makeMove();

        if (flag == 1)
        {
            printf("\n\n");
            duBoard();
            break;
        }
        if (counter == 8)
        {
            duBoard();
            printf("\n\tThe match is a tie.\n");
        }
        counter++;
    }
    while(counter < 9);


    return 0;
}

