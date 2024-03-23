#include <stdio.h>
 
int main()
{
	char ParImpar;
	int num;
	
	scanf("%d",&num);
	scanf(" %c",&ParImpar);
	
	if( ParImpar == 'p' ) {
	  printf(" ------Pares------ \n");
		}
	if( ParImpar == 'i' ) {
			printf(" ------Impares------ \n");
			}
		
	printf("Ingrese numero para conteo: \n");
	
	for( int i = 1; i <= num; i++) {
		
		if( ParImpar == 'p' ) {
			if( i % 2 == 0){
			printf("%d \n",i);
			}
		}
		if( ParImpar == 'i' ) {
			if( i % 2 != 0) {
				printf("%d \n",i);
			}
		}
	}
	
	
	return 0;
}
 
