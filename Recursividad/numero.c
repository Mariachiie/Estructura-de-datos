/*
 * numero.c
 *
 *  Created on: 11/05/2015
 *      Author: Toshiba
 */
#include <stdio.h>

void printbin(char *byte, int bytes) {
	byte += bytes - 1;

	int i;
	for (i = 0; i < bytes; i++) {
		int binario = 0, posicion = 1;
		while (*byte > 0) {
			binario = binario + (*byte % 2) * posicion;
			*byte /= 2;
			posicion *= 10;
		}
		printf("%d ", binario);
		byte--;
	}
}
void analyze(float numero) {
	char signo = 0;
	unsigned char exponente = 0;
	char exp = 0;
	signo = (char) (((unsigned long) numero >> 31) & 0x01);
	exponente = (unsigned char) (((unsigned long) numero >> 23));
	exp = exponente - 127;
	if (signo == 0) {
		printf("signo: positivo\n");
	} else {
		printf("signo: negativo\n");
	}
	printf("%d", exp);
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	int inumero;
	int seleccion;
	printf("Elige una opcion: 1.practica1/  2.practica2");
	scanf("%d", &seleccion);

	if (seleccion == 1) {
		printf("dame un numero: \n");
		scanf("%d", &inumero);

		printbin(&inumero, 4);
	} else if (seleccion == 2) {

		float numero = 0;
		printf("ingresa un numero flotante: \n");
		scanf("%f", &numero);

		analyze(numero);
	}

	return 0;
}


