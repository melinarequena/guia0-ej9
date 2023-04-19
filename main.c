/* Guia 0, Ej 9
 9. Defina una función que calcule la longitud de una cadena de caracteres. */

#include<stdio.h>
void calcular(char *);

int main(){
    char texto[1000], *textoptr;
    textoptr =  &texto;
    printf("Ingrese un texto:\n");
    gets(texto);
    calcular(textoptr);
    return 0;
}

void calcular(char *textoptr){
    int i, cont=0;
    for(i=0; textoptr[i]!='\0'; i++)
    {
       cont++;
    }
    printf("La longitud de la cadena es de %d", cont);
}