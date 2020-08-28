#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo
{
	int  matricula;
	char nombre[20];
	struct nodo *siguiente;  //Apuntador aloja direcciones de memoria
} st_nodo;   //sizeof = 32

/* ejemplo de implementacion de una estructura dinamica - pila */

int main(int argc, char *argv[]) {
	struct nodo *lista;    //lista siempre apunta al primer nodo
	struct nodo *nuevo;    //Se utiliza para pedir un nuevo nodo
	struct nodo *final;    //apunta al ultimo elemento de la lista
	int    opcion;         //guardar respuesta de continuar o no
	int    contador=0;     //para contar el numero de elementos capturados
	
	//inicializar apuntadores
	lista = NULL;
	nuevo = NULL;
	final = NULL;
	
	//inicial ciclo de captura (llenar la lista/cola)
	do
	{
		//pedir memoria y se aloja en nuevo
		nuevo = (struct nodo *)malloc(sizeof(struct nodo));
		
		//llenar los datos(capturar)
		printf("Ingrese la matricula: ");
		scanf("%i",&nuevo->matricula);
		fflush(stdin);
		printf("Ingrese el nombre: ");
		gets(nuevo->nombre);
		nuevo->siguiente = NULL;
		
		//ingresar el nuevo nodo a la lista/cola (push)
		if(lista == NULL)
		{
			lista = nuevo;
	    }
	    else
	    {
	    	final->siguiente = nuevo;
		}
	    final = nuevo;  //final siempre apunta al ultimo

		printf("Desea continuar:");
		opcion = getch();
		printf("\n");
	}while(opcion == 's' || opcion == 'S');

	//inicio de ciclo de procesamiento (barrido/procesamiento de la lista/cola)
	printf("Datos capturados en la lista/cola....\n");
	printf("======================================\n");
	
	while( lista != NULL)    //lista siempre apunta al ultimo nodo
	{
		printf("Matricula capturda: %i\n",lista->matricula);
		printf("Nombre capturado: %s\n",lista->nombre);
		lista = lista->siguiente;
		contador++;
	}
	printf("Total de elementos capturados: %i\n",contador);
	return 0;
}


