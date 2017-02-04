/*Exercicio dez */
/*

Inicio
inteiro: cateto1, cateto2, hipotenusa;
Escreva("Digite o valor do primeiro cateto:");
Leia(cateto1);
Escreva("Digite o valor do segundo cateto:");
Leia(cateto2);
hipotenusa<-raizquadrada(cateto1*cateto1 + cateto2*cateto2);
Escreva("O valor da hipotenusa é:",hipotenusa);
Fim */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int cateto1,cateto2,hipotenusa;
	printf("Digite o valor do primeiro cateto:");
	scanf("%d",&cateto1);
	printf("Digite o valor do segundo cateto:");
	scanf("%d",&cateto2);
	hipotenusa=sqrt(cateto1*cateto1 + cateto2*cateto2);
	printf("O valor da hipotenusa é: %d",hipotenusa);
}








