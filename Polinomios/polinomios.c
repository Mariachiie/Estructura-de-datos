/*
 * polinomios.c
 *
 *  Created on: 11/05/2015
 *      Author: Toshiba
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct num {
	int coeficiente;
	int exponente;
	struct num *siguiente;
} NUM;

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	int opcion = 1;
	int evaluar = 0;
	NUM *inicio = NULL;
	NUM *anterior = NULL;
	NUM *nodo = NULL;
	float result = 0;

	while (opcion == 1) {
		NUM *nuevo = (NUM *) malloc(sizeof(NUM));
		printf("ingrese Polinomio\n");
		printf("ingresa el coeficiente: ejemplo 2,6,7....\n");
		scanf("%d", &nuevo->coeficiente);
		printf("ingresa su exponente: ejemplo 1,2,3...\n");
		scanf("%d", &nuevo->exponente);
		printf("quieres ingresar otro termino?  1.si / 2. no\n");
		scanf("%d", &opcion);

		nuevo->siguiente = NULL;
		if (anterior == NULL) {
			inicio = nuevo;
		} else {
			anterior->siguiente = nuevo;
		}
		anterior = nuevo;
	}
	printf("con que valor quiere evaluar el polinomio?\n");
	scanf("%d", &evaluar);
	nodo = inicio;
	while (nodo != NULL) {
		printf("el polinomio ingresado:\n");
		if (nodo->siguiente != NULL) {
			printf("%dx%d + ", nodo->coeficiente, nodo->exponente);
		} else {
			printf("%dx%d", nodo->coeficiente, nodo->exponente);
		}
		result += (nodo->coeficiente) * (pow(evaluar, nodo->exponente));
		nodo = nodo->siguiente;
	}
	printf("\n");
	printf("x = %d", evaluar);
	printf("\n");
	printf("Resultado= %.2f", result);

	return 0;
}

