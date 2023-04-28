#include <stdio.h>

int main()
{
    printf("Hola mundo\n");

    int num = 1;
    int *punt = &num;

    printf("contenido del puntero: %d\n", punt);
    printf("Direccion de memoria almacenada por el puntero: %d\n", punt);
    printf("Direccion de memoria de la variable: %d\n", &num);
    printf("Direccion de memoria del puntero: %d\n", &punt);
    int tama = sizeof(punt);
    printf("el tamanio de memoria utilizada por la variable: %d\n", tama);



    return 0;
}
