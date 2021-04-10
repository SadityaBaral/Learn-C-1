#include<stdio.h>

int main(){

    char name[20];
    printf("Enter your name: ");
    // scanf("%s", name);
    fgets(name, 20, stdin);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // & - pointer
    // fgets(age, 2, stdin);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    // fgets(gpa, 4, stdin);

    char grade;
    printf("Enter your grade: ");
    scanf("%s", &grade);
    // fgets(grade, 2, stdin);

    printf("\nYour name is %s", name);
    printf("Your age is %d", age);
    printf("\nYour gpa is %f", gpa);
    printf("\nYour grade is %c", grade);

    return 0;
}