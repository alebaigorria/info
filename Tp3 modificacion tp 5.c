#include <stdio.h>

int main() {
	
	printf("ingrese el peso en kg: ");
	int peso;
	scanf("%d",&peso);
	while(peso<0){
		printf("error, no puede ingresar números negativos, ingrese el peso de nuevo: ");
		scanf("%d",&peso);		
	}
	printf("ingrese la altura en metros: ");
	int altura;
	scanf("%d",&altura);
	while(altura<0){
		printf("error, no puede ingresar números negativos, ingrese la altura de nuevo: ");
		scanf("%d",&altura);		
	}
	printf("su índice de masa corporal es: %.2f\n", (float)peso/(altura^2));
	
	printf("   índice  |  condición\n");
	printf("-----------------------\n");
	printf("    <18.5  |  bajo peso\n");
	printf("18.5 a 24.9|  normal\n");
	printf("25.0 a 29.9|  sobrepeso\n");
	printf("    >=30   |  obesidad\n");
	
	
	//link del repo : https://github.com/alebaigorria/info
	
	
	return 0;
}

