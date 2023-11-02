/* Ordenamiento de burbuja (Bubble sort) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int i, j, n, temp = 0; 
	int bandera = 0;//Indica si se ha realizado algún cambio en la pasada (optimiza el programa)

    srand(time(NULL));
    printf("Numero de elementos a ordenar: ");
    scanf("%d", &n);
    int lista[n];

    for (i = 0; i < n; i++) {
        lista[i] = rand() % (100) + 1;
    }

    printf("\nLa lista sin ordenar:\v");//Generar serie aleatoria

    for (i = 0; i < n; i++) {
        printf("%d, ", lista[i]);
    }
    printf("\n\n");


    //Empieza ordenamiento burbuja
	for (i = 1; i < n; i++) 
	{
        bandera = 0;//Inicializa la bandera en 0 al inicio de cada pasada

        for (j = 0; j < n - i; j++) 
		{

            if (lista[j] > lista[j + 1]) 
			{
                //Se realiza el cambio aquí abajo
				temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
                bandera = 1;//Establece la bandera en 1 si se realiza un intercambio.
        	}
        }

        if (bandera == 0)
            break;//Si no hubo intercambios en esta pasada, el algoritmo se detiene
    }

    printf("\vLista ordenada: \n");

    for (i = 0; i < n; i++) {
        printf("%d, ", lista[i]);
    }

    return 0;
}

