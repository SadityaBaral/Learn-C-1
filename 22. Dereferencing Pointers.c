#include<stdio.h>

int main(){

    int age = 18;
    int *pAge = &age;
    printf("%p", pAge);
    printf("\n%d", *pAge);
    printf("\n%d", *&age);
    printf("\n%d", &*&age);

    return 0;
}