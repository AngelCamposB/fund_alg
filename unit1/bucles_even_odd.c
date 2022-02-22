#include <stdio.h>
//#include "/mnt/c/Documents and Settings/Angel/Documents/UPY/1Cuarter/fund_alg/unit1/utils.h"

int main(){
    int i = 1, j = 10;
    for(;; i++, j = j+1){
        printf("i: %d, j: %d\n", i,j);
        sleep(2);
    };
}