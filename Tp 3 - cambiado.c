#include <stdio.h>

int main() {
	
	printf("ingrese el peso en kg: ");
	int peso;
	scanf("%d",&peso);
	printf("ingrese la altura en metros: ");
	int altura;
	scanf("%d",&altura);
	float indice = (float)peso/(altura^2);
	printf("su índice de masa corporal es: %.2f\n", indice);
	
	printf("   índice  |  condición\n");
	printf("-----------------------\n");
	printf("    <18.5  |  bajo peso\n");
	printf("18.5 a 24.9|  normal\n");
	printf("25.0 a 29.9|  sobrepeso\n");
	printf("    >=30   |  obesidad\n");
	
	if(indice <= 18.5)
	{
		printf("bajo peso");
	}
	if(indice > 18.5 && indice <= 24.9)
	{
		printf("peso normal");
	}
	if(indice > 24.9 && indice <=29.9 )
	{
		printf("sobrepeso");
	}
	if(indice > 30.0)
	{
		printf("obesidad");
	}

	
	
	return 0;
}

