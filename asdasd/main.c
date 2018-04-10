#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[40];
    char apellido[40];
    fflush(stdin);
    printf("Ingrese nombre:");
    scanf("%[^\n]",nombre);
    fflush(stdin);
    printf("\nIngrese apellido:");
    scanf("%[^\n]",apellido);
    strlwr(nombre);
    strlwr(apellido);
    nombre[0]=toupper(nombre[0]);
    apellido[0]=toupper(apellido[0]);
    strcat(apellido," ");
    strcat(apellido,nombre);
    printf("%s",apellido);
    return 0;
}
