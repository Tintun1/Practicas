#include <stdio.h>


int main()
{
	int num;
	
	printf("Bienvenido al detector de numeros, porfavor ingrese uno: ");
	scanf("%d",&num);
	
	if(num % 2 == 0) {
		printf("el numero %d es un numero par.\n",num);
		} else {
			printf("el numero %d es un numero impar.\n",num);
			}
	
	return 0;
}
 
