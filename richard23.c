
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int vector[10];
	int i;
	for (i= 0; i < 10; i++){
		printf("\ningrse el valor(%i): ", i);
		scanf ("%i", &vector[i]);		
}
for (i = 9; i>=0; i--){
	printf("\nvalores inverson : (%d)\n", vector[i]);
	printf ("\n");
}
return 0;
}
