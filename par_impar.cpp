#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num=0, par=0, impar=0, i, soma_par=0, soma_impar=0; 
	float media=0;
	
	for(i=0; i<10; i++)
	{
		printf ( "Digite o %d n%cmero: ", i+1, 163);
		scanf ("%d", &num);
		
		if(num % 2 == 0)
		{
			par++;
			soma_par += num;
		}
		else
		{
			impar++;
			soma_impar += num;
			media = soma_impar/impar;
		}	
	}
	
	printf ( "\nA quantidade de n%cmeros pares %c: %d \n", 163, 130, par);
	printf ( "\nA quantidade de n%cmeros impares %c: %d \n", 163, 130, impar);
	printf ( "\nA soma dos n%cmeros pares %c: %d \n", 163, 130, soma_par); 
	printf ( "\nA m%cdia dos n%cmeros impares %c: %.2f \n\n", 130, 163, 130, media); 
	
	system ("pause");
	return (0);
}

