/*Snake, water, gun or rock, paper, scissors is a game most of us have played during 
school time. (I sometimes play it even now). 
Write a C program capable of playing this game with you. 
Your program should be able to print the result after you choose snake/water or gun.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int Player;
    int Computer = rand() % 3;
    /*
       0 --> Rock
       1 --> Paper
       2 --> Scissor
    */
    printf("Choose 0 for Rock, 1 for Paper and 2 for Scissor \n");
    printf("Enter a number : ");
    scanf("%d", &Player);
    printf("Computer chose : %d\n", Computer);

    if (Player == 0 && Computer == 0)
    {
        printf("Its a Draw!\n");
    }
    else if (Player == 0 && Computer == 2)
    {
        printf("You Win!\n");
    }
    else if (Player == 0 && Computer == 1)
    {
        printf("You Loss!\n");
    }
    else if (Player == 1 && Computer == 0)
    {
        printf("You Win!\n");
    }
    else if (Player == 1 && Computer == 1)
    {
        printf("Its a Draw!\n");
    }
    else if (Player == 1 && Computer == 2)
    {
        printf("You Loss!\n");
    }
    else if (Player == 2 && Computer == 0)
    {
        printf("You Loss!\n");
    }
    else if (Player == 2 && Computer == 1)
    {
        printf("You Win!\n");
    }
    else if (Player == 2 && Computer == 2)
    {
        printf("Its a Draw!\n");
    }
    else
    {
        printf("Something went wrong!");
    }
    return 0;
}