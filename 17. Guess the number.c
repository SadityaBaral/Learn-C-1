#include <stdio.h>

int main(int argc, char const *argv[])
{

    int value = 7;
    int guess;
    int chances = 5;

    while (value != guess && chances != 0)
    {
        printf("\nChances Left: %d", chances);
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        chances--;
    };

    if (chances == 0)
    {
        printf("\nYou Lost... The number is %d", value);
    }
    else
    {
        printf("You guessed the number correctly...");
    }
    return 0;
}
