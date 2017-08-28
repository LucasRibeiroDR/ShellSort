/// Nome: <Lucas Ribeiro dos Reis>

///RA: <120088>

///Trabalho <Tarefa 12 - Shellsort>

#include "Shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *vetorPalavras[]={"casa","lua","cama","dama","rua","chuva"};
    char *stringAuxiliar[1];
    int quantidadePalavras = 6;
    int h=4;
    int i;
    int contadorAuxiliar;
    printf("Antes do ShellSort: %s, %s, %s, %s, %s, %s\n\n", vetorPalavras[0],vetorPalavras[1],vetorPalavras[2],vetorPalavras[3],vetorPalavras[4], vetorPalavras[5]);

    contadorAuxiliar=h;
    for(i=0;contadorAuxiliar!=quantidadePalavras;i++){
        if((strcmp(vetorPalavras[i],vetorPalavras[contadorAuxiliar]))==1){
            stringAuxiliar[0]=vetorPalavras[i];
            vetorPalavras[i]=vetorPalavras[contadorAuxiliar];
            vetorPalavras[contadorAuxiliar]=stringAuxiliar[0];
        }
        contadorAuxiliar++;
    }

    h=h/2;
    contadorAuxiliar=h;
    for(i=0;contadorAuxiliar!=quantidadePalavras;i++){
        if((strcmp(vetorPalavras[i],vetorPalavras[contadorAuxiliar]))==1){
            stringAuxiliar[0]=vetorPalavras[i];
            vetorPalavras[i]=vetorPalavras[contadorAuxiliar];
            vetorPalavras[contadorAuxiliar]=stringAuxiliar[0];
        }
        contadorAuxiliar++;
    }

    h=h/2;
    contadorAuxiliar=h;
    for(i=0;contadorAuxiliar!=quantidadePalavras;i++){
        if((strcmp(vetorPalavras[i],vetorPalavras[contadorAuxiliar]))==1){
            stringAuxiliar[0]=vetorPalavras[i];
            vetorPalavras[i]=vetorPalavras[contadorAuxiliar];
            vetorPalavras[contadorAuxiliar]=stringAuxiliar[0];
        }
        contadorAuxiliar++;
    }

    printf("Depois do ShellSort: %s, %s, %s, %s, %s, %s\n\n", vetorPalavras[0],vetorPalavras[1],vetorPalavras[2],vetorPalavras[3],vetorPalavras[4], vetorPalavras[5]);
    return 0;
}
