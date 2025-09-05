#include <stdio.h>
#include <math.h>
#define PI 3.14159


int calcularAreaRectangulo(int longi,int alt);
int calcularPerimetroRectangulo(int longi,int alt);
int calcularDiagonalRectangulo(int longi,int alt);
int calcularAreaCirculo(int radio);
int calcularPerimetroCirculo(int radio);

void imprimirResultados(int perimetro,int area,int diagonal);


int main(int argc, char *argv[]) {
	
	int n;
	do{
	printf("ingrese la figura que desea calcular (1: rectangulo 2: circulo) : ");
	scanf("%d",&n);
	}while(n<1 || n>2);
	
	if(n==1){
		int l,h;
		printf("opción rectangulo\n");
		printf("ingrese su longitud y altura: ");
		scanf("%d %d",&l,&h);
		imprimirResultados(calcularAreaRectangulo(l,h),calcularPerimetroRectangulo(l,h),calcularDiagonalRectangulo(l,h));
	}
	if(n==2){
		int r;
		printf("opción circulo\n");
		printf("ingrese su radio: ");
		scanf("%d",&r);
		imprimirResultados(calcularAreaCirculo(r),calcularPerimetroCirculo(r),0);
	}
	
	
	return 0;
}

int calcularAreaRectangulo(int longi,int alt){
	return longi*alt;
}
int calcularPerimetroRectangulo(int longi,int alt){
	return 2*(longi+alt);
}
int calcularDiagonalRectangulo(int longi,int alt){
	int k = longi*longi + alt*alt;
	return sqrt(k);
}
int calcularAreaCirculo(int radio){
	return PI*(radio*radio);
}
int calcularPerimetroCirculo(int radio){
	return 2*PI*radio;
}	
void imprimirResultados(int perimetro,int area,int diagonal){
	
	printf("perimetro: %d\narea: %d",perimetro,area);
	if(diagonal!=0)
		printf("\ndiagonal: %d",diagonal);
	
}
