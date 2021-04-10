#include<stdio.h>

int main(int argc, char const *argv[])
{
    int index = 1;
    while (index <= 5){
        printf("\nWhile Loop: %d", index);
        index++;

    };

    do{
        printf("\n\nDo While: %d", index);
        index++;
    } while (index == 69);
    return 0;
}
