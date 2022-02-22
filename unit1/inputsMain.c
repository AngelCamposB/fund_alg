#include <stdio.h>
#include <stdlib.h>

char* myName = "Angel Campos";
//char* = 
//atoi(anStringHere);
int main(int argc, char** argv){
    printf("Welcom to program %s\n", argv[0]);
    //sprintf(str, "%d", aNumber);
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;

    printf("La suma de los 2 numeros pasados por parámetro es %d\n", sum);

    return 0;
}