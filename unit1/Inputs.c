#include <stdio.h>

//Declaranddo variables
int num1;
int num2;

int main(){
    //Imprimir mensaje
    printf("Enter number1,\n\tnum1: ");
    //Inputs
    scanf("%d", &num1); //Inputs keyboard
    printf("Enter number2,\n\tnum2: ");
    scanf("%d", &num2);
    //Procesos
    int sum = num1 + num2;
    printf("suma = %d\n", sum);
    
    return 0;
}