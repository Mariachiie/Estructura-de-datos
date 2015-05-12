/*
 * agenda.c
 *
 *  Created on: 11/05/2015
 *      Author: Toshiba
 */
#include<stdio.h>
#define TOTAL_CITAS 10

typedef struct Agenda_citas {
		int dia;
		int mes;
		int ano;
		int hora;
		char nombre[30];
	} AGENDA;

	int i;
	AGENDA citas[TOTAL_CITAS];

	AGENDA ingresarcita(AGENDA nuevo)
	{
		for (i= 0; i<TOTAL_CITAS; i++)
			{
				printf("nombre del paciente: %d\n", i+1);
				gets(citas[i].nombre);
				fflush(stdin);
				printf("Ingresa el dia de la cita\n");
				scanf("%d", &citas[i].dia);
				fflush(stdin);
				printf("Ingresa el mes de la cita (con numero)\n");
				scanf("%d", &citas[i].mes);
				fflush(stdin);
				printf("Ingresa el año de la cita\n");
				scanf("%d", &citas[i].ano);
				printf("Ingresa la hora de la cita, (formato 24 horas)\n");
				scanf("%d", &citas[i].hora);
				fflush(stdin);
				printf("\n");
			}
		return nuevo;
	}
	void imprimircitas()
	{

		for (i=0; i<TOTAL_CITAS; i++)
			printf("nombre: %s\n", citas[i].nombre);
			printf("dia: %d\n", citas[i].dia);
			printf("mes: %d\n", citas[i].mes);
			printf("año: %d\n", citas[i].ano);
			printf("hora: %d horas\n", citas[i].hora);
			printf("\n");


	}
	int main()
	{
		setvbuf(stdout, NULL, _IONBF, 0);
		int salir=0;
		int opcion;

			AGENDA nuevo;

		printf("************  Bienvenidos   ************\n");
		while(!salir)
		{
			printf("elige una opcion:\n"
					"1. ingresar cita\n"
					"2. imprimir citas\n"
					"3. salir\n");
			scanf("%d", &opcion);
			printf("\n");
			fflush(stdin);

			switch(opcion)
			{

			case 1:
			ingresarcita(nuevo);
			break;

			case 2:
			imprimircitas(nuevo);
			break;

			case 3:
				salir=1;
			break;

			}
		}
		return 0;

	}



