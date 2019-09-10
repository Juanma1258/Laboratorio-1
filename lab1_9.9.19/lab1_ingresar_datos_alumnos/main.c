#include <stdio.h>
#include <stdlib.h>
#define T 2

int main()
{
    int i;
    int notas [T];
    int notas2[T];
    int notas3[T];
    int legajo[T];
    int edad[T];
    char sexo[T];

    for(i = 0; i<T; i++)
    {

        printf("ingrese sexo: \n");
        fflush(stdin);

        scanf("%c", &sexo[i]);
        printf("ingrese edad: \n");
        scanf("%d", &edad[i]);
        printf("ingrese legajo: \n");
        scanf("%d", &legajo[i]);
        printf("ingrese primera nota: \n");
        scanf("%d", &notas[i]);
        printf("ingrese segunda nota: \n");
        scanf("%d", &notas2[i]);
        printf("ingrese tercera nota: \n");
        scanf("%d", &notas3[i]);



        }


    return 0;
}
