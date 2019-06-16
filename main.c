#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

char *buffer[MAX];

/* Copia el contenido de 'input' a 'b' */
void copy_argumentos(char **b, char **input, int n);

int main(int argc, char **argv)
{
	copy_argumentos(buffer, argv, argc);

	int i;
	for(i=0; i<argc; i++){
		printf("%s\n",buffer[i]);
	}
}

void copy_argumentos(char **b, char **input, int n)
{
	int i;
	for(i=0; i<n; i++){
		//Reserva espacio en memoria dinamica
		b[i] = (char *) malloc(MAX);
		//Copia de una cadena de caracteres a otra
		strcpy(b[i],input[i]);
	}
}