#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i=1; i<=5; i++){
        printf("\nValue: %d", i);
    }

    int myArray[] = {1, 6, 7, 8, 9};
    int j;
    for (j=0; j<=5; j++){
        printf("%d\n", myArray[j]);
    }
    return 0;
}


