#include <stdio.h>

float num,por;
int cant;

int main()

{
	
printf("ingrese un numero\n");
scanf("%f",&num);
printf("\ningrese porcentaje deseado\n");
scanf("%d",&cant);
por= cant * num / 100;
printf(" el resultado es %f\n",por);
return 0;

}
