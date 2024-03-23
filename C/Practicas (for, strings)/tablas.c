#include <stdio.h>
 
int main()
{
	int num,tabla;
	
	scanf("%i",&num);
	printf("Ingrese numero: \n");
	
	for(int i = 1; i <= 10; i++) {
		tabla = num * i;
		
		printf("%i x %i = %i \n",num,i,tabla);
		}
		
	
	return 0;
}
 
