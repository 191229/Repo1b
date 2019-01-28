#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, i, fact = 1;
	printf("Escribe un numero para calcular su factorial\n");
	scanf("%d", &a);
	if(a>=0)
	{	
		for (i = a; i > 1; i--){
		
		
			fact = fact * i; 
		}
		printf("El factorial de %d = %d \n", a,fact);
	}
	else{
		printf("los valores tienen que ser poisitivos");
	}  
return 0;
}
