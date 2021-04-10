#include<stdio.h>

int main(){
    int varNum = 7;
    printf("Before: %f", varNum);
    varNum = 10;
    printf("\nAfter : %f", varNum);

    const int Const_Var = 69;
    printf("\nConstant Var: %f", Const_Var);
    // constVar = 36; cant change the value
    return 0;
}