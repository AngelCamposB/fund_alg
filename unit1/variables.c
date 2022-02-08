#include <stdio.h>

int edad = 23;
float estatura = 1.70;
char* name = "Angel Campos";
char sexo = 'M';

int main(){
    int after10years = suma(edad, 10);
    printf("mi edad después de 10 años: %d", after10years);
    return 0;
}