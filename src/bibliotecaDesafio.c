/*
 * bibliotecaDesafio.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Lenovo
 */

#include <stdio.h>
#include <stdlib.h>

char desplegarMenu(void)
{
	char opcion;

	printf("Ingrese la opcion que desea realizar:"
			"\na-Iniciar"
			"\nb-Procesar"
			"\nc-Finalizar"
			"\nd-Salir\n");
	fflush(stdin);
	scanf("%c", &opcion);

	while(opcion != 'a'&& opcion != 'b' && opcion != 'c' && opcion != 'd')
	{
		printf("ERROR. Ingrese la opcion que desea realizar:"
				"\na-Iniciar"
				"\nb-Procesar"
				"\nc-Finalizar"
				"\nd-Salir\n");
		fflush(stdin);
		scanf("%c", &opcion);
	}

	return opcion;
}

void iniciar ()
{
	printf("Usted a Iniciado. \n");
}

void procesar ()
{
	printf("Usted esta Procesando.\n");
}
void finalizar ()
{
	printf("Usted esta Finalizando. \n");
}

char salir ()
{
	char opcionSioNo;

	printf("Esta seguro que desea salir?[s= Si, n=No]:  \n");
	fflush(stdin);
	scanf("%c", &opcionSioNo);

	return opcionSioNo;
}

