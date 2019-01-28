#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int vector[9999];
	int i, n, may, men, rango;
    float promedio,suma=0;
    
	printf("ingresar los numeros deseados: ");
	scanf("%i", &n);
	
	if(n>0)
 {
 	//introducir los numeros que desea
	for (i=0; i<n; i++)
    {
        printf("\ningrse el numero: ");
        scanf("%d", &vector[i]); 
	}
	
	//el numero mayor y menor
	
	may = vector[0];
	men = vector[0];
	
	for (i=0; i<n; i++)
	{
	 
	 if (vector[i]>may)
	  { 
	    may = vector[i];
      }
	 
	 if (vector[i]<men)
	  {
	    men = vector[i];
	  }
    }
    
    printf("\nel numero mayor es: %d ", may);
    printf("\nel numero menor es: %d ", men);
    
    
	//calcular el rango
    rango = may - men;
    printf ("\nel rango es: %d ", rango);
    
	
	//promedio
    for(i=0; i<n; i++)
	{
	 suma = suma + vector[i];
    }
	promedio = suma/n;
    printf("\nSu promedio es: %g",promedio);
}
else{
	printf ("\nerror, los numeros deben ser mayor a cero\n");
}

}
