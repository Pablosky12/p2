#include <stdio.h>

int PromClase(int notas[])
{
    int suma =0;
    for (int i =0; i<5; i++) {
        suma += notas[i];
    }
    return (suma) / 5;
}

int main(int argc, char const *argv[])
{
    int *datos =  new int[5];
    int result;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &datos[i]);
    }
    result = PromClase(datos);
    printf("%d\n", result);
    return 0;
}
