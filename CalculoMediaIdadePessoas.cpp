#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void lerVetores( int x[],int tam,char y[3][35])
{
     for(int i=0;i<tam;i=i+1)
     {
             printf("Digite o %d nome:",i);
             fflush(stdin);
             gets(y[i]);
             printf("Digite a idade do %d elemento:",i);
             scanf("%d",&x[i]);
     }
}

int calculaMedia(int x[], int tam)
{
    int media=0;
    for(int i=0;i<tam;i=i+1)
    {
     media=media+x[i];        
    }
    media=media/tam;
    return (media);
}

int acharNovo(int x[],int tam)
{
    int ind=0;
    for(int i=1;i<tam;i=i+1)
    {
            if(x[i]<x[ind])
            {
                           ind=i;
            }
    }
    return(ind);
}

int qtdpes(int x[],int tam)
{
    int qtd=0;
    for (int i=0;i<tam;i=i+1)
    {
        if(x[i]>65)
        {
                   qtd=qtd+1;
        }
    }
    return(qtd);
}

main()
{
      int idade[3], mediaidade, qtd, ind;
      char nome[3][35];
      lerVetores(idade,3,nome);
      mediaidade=calculaMedia(idade,3);
      ind=acharNovo(idade,3);
      qtd=qtdpes(idade,3);
      printf("\n A media da idade e: %d \n A pessoa mais nova e:",mediaidade);
      puts(nome[ind]);
      printf(" A idade dele e: %d \n E a quantidade de pessoas maiores de 65 anos sao: %d",idade[ind],qtd);
      getch();
}










