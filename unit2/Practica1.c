#include <stdio.h>
#include <stdlib.h>

int* arraySum(int array[], int size);

int main(int argc, char** argv){
    //Declarando el arreglo unidimensional
    int a[6] = {55,70,80,65,90,85};
    int* sumaArreglo = arraySum(a, 6);

    printf("[%d, %d]\n", sumaArreglo[0], sumaArreglo[1]);

}

int* arraySum(int array[], int size){
    int* Result =malloc(sizeof(int) * 2);

    for(int i=0; i< size; i++){
        if(i%2 == 0){
            Result[0] = Result[0]+array[i];
        }
        else{
            Result[1] = Result[1]+array[i];
        }
    }

    return Result;
}