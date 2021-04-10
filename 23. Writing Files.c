#include<stdio.h>

int main(){

    FILE * fpointer = fopen("testFile.txt", "a");

    // Write in the file
    fprintf(fpointer, "\nHello, my name is Naruto.");

    fclose(fpointer);
    return 0;
}
