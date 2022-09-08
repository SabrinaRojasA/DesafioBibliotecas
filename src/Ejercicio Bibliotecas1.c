/*
 ============================================================================
 Desafío: Menú-Funciones y Bibliotecas

Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaDesafio.h"

int main(void)
{
	setbuf(stdout, NULL);

	char opcionMenu;
	char opcionSalir;
	int banderaIniciar;
	int banderaProcesar;

	opcionSalir = 'n';
	banderaIniciar = 0;
	banderaProcesar = 0;


	do
	{
		opcionMenu = desplegarMenu();

		switch(opcionMenu)
		{
			case 'a': //iniciar

				iniciar();
				banderaIniciar = 1;

			break;
			case 'b'://procesar

				procesar();
				if(banderaIniciar == 0)
				{
					printf("Debe Iniciar antes de Procesar \n");
				}
			break;
			case 'c'://finalizar

				finalizar();
				if(banderaIniciar == 0)
				{
					printf("Debe Iniciar antes de Finalizar \n");
				}
				else
				{
					if(banderaProcesar == 0)
					{
						printf("Debe Procesar antes de Finalizar \n");
					}
				}
			break;
			case 'd'://salir
				opcionSalir=salir();
			break;
		}
	}while(opcionSalir != 's');


	return EXIT_SUCCESS;
}


