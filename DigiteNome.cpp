#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char nome[20];
	printf("Digite o nome:");
    fflush(stdin);
    gets(nome);
    printf("O nome digitado �:%s \n",nome);
    system("pause");
}


