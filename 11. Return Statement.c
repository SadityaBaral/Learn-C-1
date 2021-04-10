#include <stdio.h>

double cube(double num)
{
    return num * num * num;
}

int main()
{
     double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Answer: %f", cube(num));
    return 0;
}