#include <stdio.h>

int FuncionCuadrado(int num);
void VoidFuncionCuadrado(int num);
void DireccionContenidoVar(int numero);
void Invertir(int x, int y);
void Orden(int x, int y);


int main()
{
    int numIngresado;
    printf("Ingrese un numero --> ");
    scanf("%d", &numIngresado);
    int numCuadrado = FuncionCuadrado(numIngresado);
    printf("%d al cuadrado es : %d\n", numIngresado, numCuadrado);

    VoidFuncionCuadrado(numIngresado);

    int x = 10, y = 99;
    DireccionContenidoVar(x);

    Invertir(x, y);

    Orden(x, y);

    return 0;
}

int FuncionCuadrado(int num)
{
    return (num * num);
}

void VoidFuncionCuadrado(int num)
{
    int cuadradoNum;
    cuadradoNum = num * num;
    printf("%d al cuadrado es %d\n", num, cuadradoNum);
}

void DireccionContenidoVar(int a)
{
    printf("La direccion de memoria es: %d\n", &a);
    printf("Contenido es: %d\n", a);
}

void Invertir(int x, int y)
{
    int aux;
    aux = x;
    x = y;
    y = aux;
    printf("X es igual a --> %d, Y es igual a --> %d\n", x, y);
}

void Orden(int x, int y)
{
    if (x > y)
    {
        printf("Orden: %d - %d\n", y, x);
    } else
    {
        printf("Orden: %d - %d\n", x, y);
    }
    
}
