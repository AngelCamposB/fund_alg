#include <stdio.h>
#include <stdlib.h> //Necesario para el atoi

int linearySearch(int arr[], int sizeArr, int valueToFind);

int main(int argc, char** argv){
    int arr[5] = {50, 5, 1, 37, 15};
    int indexFound = linearySearch(arr, 5, atoi(argv[1]));
    printf("indexFound: %d\n", indexFound);

    return 0;
}

int linearySearch(int arr[], int sizeArr, int valueToFind){
    for(int index = 0; index < sizeArr; index++){
        printf("index: %d  arregloData: %d\n", index, arr[index]);
        if(arr[index] == valueToFind){
            //printf("\ni: %d", index);
            return index;
        }
    }
    printf(" No se Imprime?\n\n");
    return -1;
}