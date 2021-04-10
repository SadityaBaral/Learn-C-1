#include <stdio.h>
#include <stdlib.h>

int main()
{   char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    sayHi(name);
    return 0;
}

void sayHi(char name[20])
{
    printf("Hello %s", name);
}