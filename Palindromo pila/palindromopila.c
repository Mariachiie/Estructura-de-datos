/*
 * palindromopila.c
 *
 *  Created on: 11/05/2015
 *      Author: Toshiba
 */

#include<stdio.h>
#include"pila.h"
#include<string.h>
#include<stdlib.h>


int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	char *texto;
	texto=(char*)malloc (sizeof(char));
	int cantidad;
	int i = 0;
	int n = 0;
	printf("Ingresa la frase para verificar si es palindromo\n");
	gets(texto);
	cantidad = strlen(texto);

	for( n=0; n<cantidad; n++){
		if (texto[n] !=0x20) texto[i++] = texto[n];
	}
	texto[i]=0;
	printf("%s", texto);
	cantidad = strlen(texto);
	PILA *stack = NULL;

	return 0;
}
