#include <stdio.h>

int main (){
	int vector [10]={15,1,42,3,123,34562,54,64,4,10};
	int temp;
	
	for (int i=0;i<10;i++){//Hace 10 recorridos en todo el arreglo para ver que todos los elementos estén ordenados
		
		for (int j=0;j<10;j++){
		
			if (vector[j]>vector[j+1]){
				
				temp=vector[j+1];//Guardar el valor más pequeño
				vector[j+1]=vector[j];//Hacer el cambio
				vector[j]=temp;
			}
		}	
	}

	
	for (int i=0;i<10;i++){
		printf("%d, ",vector[i]);
	}	
	return 0;
}
