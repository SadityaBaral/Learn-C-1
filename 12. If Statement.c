#include<stdio.h>

char compare(int age){
    if (age == 18)
        printf("Yo, whats up dwag !");
    
    else if (age<0 || age<18)
        printf("Go suck on your mother's tits or wait for your father to suck on em");
    
    else
        printf("Drink all you want, sire!");
    
}

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // compare(age);
    printf("%s", compare(age));
    return 0;
}
