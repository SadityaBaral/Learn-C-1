#include<stdio.h>

int main(){

    char color[20];
    char noun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a noun: ");
    scanf("%s", noun);
    printf("Enter a celebrity: ");
    // fgets(celebrity, 20, stdin);
    scanf("%s", celebrity);

    printf("\nRoses are %s", color);
    printf("\n%s are blue", noun);
    printf("\nI love %s", celebrity);

    return 0;
}