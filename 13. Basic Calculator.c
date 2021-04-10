#include <stdio.h>

double operation(int num1, int num2, char op)
{
    double num;
    if (op == '+')
    {
        num = num1 + num2;
    }
    else if (op == '-')
    {
        num = num1 - num2;
    }
    else if (op == '*')
    {
        num = num1 * num2;
    }
    else if (op == '/')
    {
        num = num1 / num2;
    }

    return num;
}

int main()
{
    /* code */
    double num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operator(+, -, *, /): ");
    scanf(" %c", &op);

    printf("The result is %f", operation(num1, num2, op));

    playAgain();
    return 0;
}

void playAgain()
{
    char play;
    printf("\nPlay Again(y/n)? ");
    scanf(" %c", &play);
    if (play == 'y')
    {
        main();
    }
    else
    {
        printf("The End");
    }
}
