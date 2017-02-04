/*Faca um algoritmo/ programa que receba um salario de funcionario, e que APENAS os salarios menores que 
1000,00 recebam um acrescimo de 200 reais e mostre o novo salario.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
	float sal, novosal;
	printf("Digite salario:");
	scanf("%f",&sal);
	if(sal<1000)
	{
		novosal=sal+200;
		printf("O novo salario é de: %.2f \n",novosal);	
	}	
	system("pause");
}

