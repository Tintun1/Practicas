#include <stdio.h>
 
int main()
{
	int num;
	int factorial=1;
	
	printf("Ingrese numero para factorizar: \n");
	scanf("%i",&num);

	for( int i = 1; i <= num; i++) {
	factorial *= i;
		printf("%i = %i \n",i,factorial);
	}
		printf("El factorial de %i es igual a %i",num,factorial);
		
	return 0;
}
 
