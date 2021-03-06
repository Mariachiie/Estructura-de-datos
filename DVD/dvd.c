/*
 * dvd.c
 *
 *  Created on: 11/05/2015
 *      Author: Toshiba
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct dvd {
	char titulo_or[50];
	char titulo_es[50];
	int anio;
	char director[20];
	char actores[100];
	char categoria[20];
	struct dvd *siguiente;
} DVD;

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	int opcion = 0;
	int caso = 0;
	int seguir;
	int cardinalidad = 0;
	DVD *inicio = NULL;
	DVD *actual = inicio;
	DVD *nuevo = (DVD *) malloc(sizeof(DVD));

	while (opcion == 1) {
		printf("Que decea hacer?\n");
		printf("1. insertar elementos.\n");
		printf("2. imprimir elementos.\n");
		printf("3. calcular cardinalidad.\n");
		printf("4. borar elemento.\n");
		scanf("%d", &caso);

		switch (caso) {
		case '1': // insertar
			nuevo->siguiente = NULL;
			printf("Dame el titulo original; \n");
			gets(nuevo->titulo_or);
			fflush(stdin);
			printf("Dame el titulo en espa�ol: \n");
			gets(nuevo->titulo_es);
			fflush(stdin);
			printf("Dame el a�o: \n");
			scanf("%d", &nuevo->anio);
			fflush(stdin);
			printf("Dame el director: \n");
			gets(nuevo->director);
			fflush(stdin);
			printf("Dame los actores: \n");
			gets(nuevo->actores);
			fflush(stdin);
			printf("Dame la categoria: \n");
			gets(nuevo->categoria);
			fflush(stdin);

			if (inicio == NULL) {
				inicio = nuevo;

				actual = inicio;
				seguir = 1;
			}
			while (actual != NULL) {
				if (strcmp(actual->anio, nuevo->anio) == 0) {
					seguir = 0;
					actual = NULL;
				} else {
					actual = actual->siguiente;
				}
				if (seguir) {
					nuevo->siguiente = inicio;
					inicio = nuevo;
				} else {
					printf("ya existe el conjunto");
					free(nuevo);
				}
			}
			break;
		case '2':  // imprimir
			actual = inicio;
			while (actual != NULL) {
				printf("el titulo original: %s\n", nuevo->titulo_or);
				printf("el titulo en espa�ol: %s\n", nuevo->titulo_es);
				printf("el a�o: %d\n", nuevo->anio);
				printf("el director: %s\n", nuevo->director);
				printf("los actores: %s\n", nuevo->actores);
				printf("la categoria: %s\n", nuevo->categoria);
				actual = actual->siguiente;
			}
			break;
		case '3': //cardinalidad
			actual = inicio;
			while (actual != NULL) {
				cardinalidad++;
				actual = actual->siguiente;
			}
			printf("cardinalidad del conjunto: %d\n", cardinalidad);
			cardinalidad = 0;
			break;

		}
	}

	return 0;
}


