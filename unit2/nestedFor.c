#include <stdio.h>
#include <stdlib.h> // Necesario para el atoi
#include "../libraries/utils.h"

int main(int argc, char** argv){
    for(int i = 0; i<= atoi(argv[1]); i++){ // Atoi cambia el char de argv a int argv
        printf("i: %d\n", i);
        sleep(1000);

        for(int j=2; j<= atoi(argv[2]); j++){
            printf("\tj: %d\n", j);
            sleep(500);
        };
    };
    return 0;
}