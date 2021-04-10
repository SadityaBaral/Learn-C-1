#include <stdio.h>

int main(){

    /* Data Types
    integer:       int age = 18;
    decimal value: double gpa = 3.64;
    character:     char grade = 'A';
    string:        char name[] = "Samrat Adhikari";
    */
     
    int age = 18;
    double gpa = 3.64;
    char grade = 'A';
    char name[] = "Samrat Adhikari";

    printf("I am %d years old boy, %s and my gpa is %f which is %c grade", age, name, gpa, grade);
    return 0;
}