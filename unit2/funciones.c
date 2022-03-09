#include <stdio.h>

//Prototipo de la funcion
int sumaNumbers(int num1, int num);

int main(int argc, char**argv){
    //Llamando funcion
    int mySum = sumaNumbers(2, 4);
    printf("Sume 10 + 20 equal to: %d \n", sumaNumbers(10,20));
    return 0;
}

int sumaNumbers(int num1, int num2){
    //Variables locales
    int suma = 0;
    suma = num1 + num2;
    return suma;
}