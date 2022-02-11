#include <stdio.h>

//Declarando variables
int num;

int main(){
    //Imprimiendo mensajes
    printf("Input a number to determinate if is odd or even: ");
    //Inputs
    scanf("%d", &num);
    //Procesos
    if(num%2==0){
        printf("The number %d is even\n", num);
    }
    else{
        printf("The number %d is odd\n", num);
    }
}