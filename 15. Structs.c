#include<stdio.h>

struct Student
{
    /* data */
    char name[20];
    int age;
    double gpa;
    char grade;
};


int main()
{
    /* code */
    struct Student student1;
    // student1.name = "Samrat";
    student1.age = 18;
    student1.gpa = 3.64;
    student1.grade = 'A';
    strcpy( student1.name, "Samrat");
    printf("%s", student1.name);

    struct Student student2;
    strcpy(student2.name, "Naruto");
    printf("\n%s", student2.name);



    return 0;
}
