/*https://github.com/alebaigorria/info*/

#include <stdio.h>
#define TAM 5

int main(void) {
	
	int codigo[TAM];
	float precio[TAM];
	
	printf("Lista de precios\n");
	printf("Ingrese 5 productos, primero su código y luego su precio\n");
	
	for(int i=0;i<TAM;i++){
		printf("Ingrese el código(1-999999999): Cod. ");
		scanf("%d",&codigo[i]);
		while(codigo[i]<0 || codigo[i]>999999999){
			printf("Error el código debe estar entre 1-999999999: Cod.");
			scanf("%d",&codigo[i]);
		}
		printf("ingrese el precio Cod.%d: ",codigo[i]);
		scanf("%f",&precio[i]);
		while(precio[i]<0){
			printf("Error, debe ser positivo. Cod.%d: ",codigo[i]);
			scanf("%f",&precio[i]);
		}
	}
	int caro = 0;
	int barato = 0;
	printf("  Código       Precio\n");
	for(int i=0;i<TAM;i++){
		printf("%10d   : $%.2f\n",codigo[i],precio[i]);
		if(precio[i]>precio[caro])
			caro=i;
		if(precio[i]<precio[barato])
			barato=i;
	}
	printf("producto más caro Cod.%d $%.2f\n",codigo[caro],precio[caro]);
	printf("producto más barato: Cod.%d $%.2f",codigo[barato],precio[barato]);
	
	return 0;
	

	
}

