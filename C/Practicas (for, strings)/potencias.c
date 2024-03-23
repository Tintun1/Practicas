#include <stdio.h>
 
int main()
{
	
	int num,expo;
	int resultado = 1;
	
	printf("Ingrese Potencia y exponente: \n");
	scanf("%d %d",&num,&expo);
	
	for(int i = 0; i < expo; i++) {
	   resultado *= num;
	   }
	printf(" el resultado de %d elevado a %d es: %d ",num,expo,resultado);
	
	return 0;
}
 
