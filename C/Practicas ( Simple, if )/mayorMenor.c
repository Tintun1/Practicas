#include <stdio.h>
 
int main()
{
	
	int num1,num2;
	
	printf("ingrese 2 numeros: ");
	scanf("%i",&num1);
	scanf("%i",&num2);
	printf("%i y %i \n",num1,num2);
	if( num1 > num2){
	printf("%i es mayor que %i",num1,num2);
	} else {
		printf("%i es mayor que %i",num2,num1);
	}
	return 0;
}
 
