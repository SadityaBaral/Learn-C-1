#include <stdio.h>

int main()
{
    /* code */
    char letter = 'A';

    switch (letter)
    {
    case 'A':
        printf("The letter is A");
        break;
    case 'B':
        printf("The letter is B");
        break;
    default:
        printf("Invalid letter");
        break;
    }

    return 0;
}
