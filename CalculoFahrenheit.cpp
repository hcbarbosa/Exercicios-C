/*Exercicio onze */
/*

Inicio
real: celsius,fahrenheit;
Escreva("Digite o valor da temperatura em graus celsius:");
Leia(celsius);
fahrenheit<-180*(celsius+32)/100;
Escreva("A temperatura em fahrenheit é:",fahrenheit);
Fim */
#include<stdio.h>
#include<stdlib.h>
main()
{
	float celsius,fahrenheit;
	printf("Digite o valor da temperatura em graus celsius:");
	scanf("%f",&celsius);
	fahrenheit=180*(celsius+32)/100;
	printf("A temperatura em fahrenheit é: %f",fahrenheit);
	system("pause");
}








