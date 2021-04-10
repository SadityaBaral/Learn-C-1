#include<stdio.h>

int main(){
    int age = 18;
    int * pAge = &age; // age pointer

    double gpa = 3.64;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;

    char name[] = "Samrat";
    char * pName = &name;
    printf("%p", pName);
    return 0;
}