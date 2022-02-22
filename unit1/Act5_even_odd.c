#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    //loop "for" to even numbers with argv[1]
    printf("Even Numbers:\n");
    for(int i=0; i<=num1; i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }

    //loop "while" to odd numbers with argv[2]
    int c=1;
    printf("\nOdd Numbers:\n");
    while(c<=num2){
        if(c%2==1){
            printf("%d\n",c);
        }
        c++;
    }
}