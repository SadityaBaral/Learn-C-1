#include<stdio.h>

int main(){

    char line[255];
    FILE * fpointer = fopen("testFile.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);
    return 0;
}
