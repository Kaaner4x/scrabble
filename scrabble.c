#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculate_point(char word[]);

int main(void)
{
    char player1[50];
    char player2[50];

    printf("Player1: ");
    scanf("%s", player1);

    printf("Player2: ");
    scanf("%s", player2);

    int player1_point = calculate_point(player1);
    int player2_point = calculate_point(player2);

    if (player1_point > player2_point)
    {
        printf("Player 1 win\n");
    }
    else if (player2_point > player1_point)
    {
        printf("Player 2 win\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}

int calculate_point(char word[])
{
    int point = 0;

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            int index = toupper(word[i]) - 'A';
            point += points[index];
        }
    }
    return point;    
}