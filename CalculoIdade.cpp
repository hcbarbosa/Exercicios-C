#include <stdio.h>
#include <stdlib.h>
main()
{
	int anonasc, anoatual, anos, meses, dias, semanas;
	printf("Digite o ano de nascimento:");
	scanf("%d",&anonasc);
	printf("Digite o ano atual:");
	scanf("%d",&anoatual);
	anos=anoatual-anonasc;
	meses=anos*12;
	dias=anos*365;
	semanas=anos*52;
	printf("A idade em anos � %d, em meses � %d, em semanas � %d e em dias � %d",anos,meses,semanas,dias);
	system("pause");
}
