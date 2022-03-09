#include <stdio.h>


int printArray(int array[],int a);

int main(){
    int array[5]={0,1,2,3,4};
    printf("This program print a determinated array given by argument:\n");
    printArray(array,5);
}

int printArray(int array[], int a){
    printf("[");
    for(int i=0; i<a; i=i+1){
        printf("%i ",array[i]);
        //printf("%i\n", i);
    }
    printf("]\n");
}