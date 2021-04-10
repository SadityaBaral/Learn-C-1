#include <stdio.h>

int main(){

    int luckyNumbers[] = {4, 6, 45, 78, 7, -32};
    luckyNumbers[0] = 200;
    printf("\n%d", luckyNumbers[0]);

    int dontKnow[10];
    luckyNumbers[1] = 80;


    return 0;
}