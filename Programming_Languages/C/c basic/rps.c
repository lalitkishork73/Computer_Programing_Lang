#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int grn(int n) //random number of computer
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2) //comparing rock paper scissor
{
    if (char1 == char2) //for draw
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 = 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("\n         Welcome to My Game");
    for (int i = 0; i < 3; i++) //loop
    {
        printf("\n\n\n1. Rock \n2. Paper \n3. Scissor");
        // player turn
        printf("\nYour turn : ");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You chose- %c", playerchar);
        //computer turn
        printf("\n\nComputer's turn ");
        temp = grn(3) + 1;
        compchar = dict[temp - 1];
        printf("\nComputer chose- %c", compchar);
        // Compare the score
        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("\n Computer got it");
        }
         else
        {
            if (greater(compchar, playerchar) == -1)
            {
                compscore += 1;
                playerscore += 1;
                printf("\n Draw\n");
            }
            else
            {
                playerscore += 1;
                printf("\n You got it\n");
            }
        }
        printf("your score=%d   computer score=%d", playerscore, compscore);
    } //loop end
    if (playerscore > compscore)
    {
        printf("\n\n\n         You Win");
    }
    else
    {
        if (compscore > playerscore)
        {
            printf("\n\n\n          Computer Wins");
        }
        else
        {
            printf("\n\n\n           Match Draw");
        }
    }
    getch();
    return 0;
}