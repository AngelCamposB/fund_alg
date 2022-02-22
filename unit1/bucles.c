#include <stdio.h>
#include <stdlib.h>

int count =1;

int main(){
    printf("--While loop--\n");
    while (count <=100){
        printf("Count: %d\n", count);
        count= count+1;
    }

    printf("--for loop--\n");
    for(int i=1; i<=100; i=i+1){
        printf("i: %d\n", i);
    }

    for(int i =1; ; i=i+1){
        printf("i:%d\n", i);
        if(i>900){
            break;
        }
    }

}