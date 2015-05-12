/*
 * hash.c
 *
 *  Created on: 11/05/2015
 *      Author: Toshiba
 */

#include<stdio.h>
#define TAM 30
int tabla_hash[TAM] = { 0 };

int hash(int clave) {
	//modular
	return clave % TAM;
}

int insertar(int clave) {
	int indice;
	indice = hash(clave);
	if (tabla_hash[indice] != 0) {
		int modulo = indice + 1;
		printf("colision\n");
		while (tabla_hash[modulo % TAM] != 0 && modulo % TAM != indice) {
			printf("colision\n");
			modulo++;
		}
		if (tabla_hash[modulo % TAM] == 0) {
			tabla_hash[modulo % TAM] = clave;
			return 1;
		} else {
			printf("espacio agotado\n");
			return 0;
		}
	} else {
		tabla_hash[indice] = clave;
		return 1;
	}
}

int buscar(int clave) {
	int indice;
	indice = hash(clave);
	if (tabla_hash[indice] == clave) {
		return indice;
	} else {
		int modulo = indice + 1;
		while (tabla_hash[modulo % TAM] != 0 && modulo % TAM != indice) {
			modulo++;
		}
		if (tabla_hash[modulo % TAM] == clave) {
			return modulo % TAM;
		} else {
			return -1;
		}
	}
}
int eliminar(int clave) {
	int indice;
	indice = buscar(clave);
	if (indice == -1) {
		printf("no existe\n");
		return 0;
	} else {
		tabla_hash[indice] = 0;
		return 1;
	}
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	int opcion;
	int expediente;
	printf("ingrese el expediente\n");
	scanf("%d", &expediente);
	printf("seleccione una opcion: 1.-insertar/2.-buscar/3.-eliminar");
	scanf("%d", &opcion);
	switch(opcion);




	return 0;
}
