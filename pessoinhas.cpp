#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void lerVetores( int x[],int tam,char y[5][35])
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

int acharNovo(int x[],int tam, char Nomenovo[35], char y[5][35])
{
    strcpy(Nomenovo,y[0]);
    int maisnovo=x[0];
    for(int i=1;i<tam;i=i+1)
    {
            if(x[i]<maisnovo)
            {
                             maisnovo=x[i];
                             strcpy(Nomenovo,y[i]);
            }
    }
    return(maisnovo);
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
      int idade[5], mediaidade, qtd, novo;
      char nome[5][35], nomenovo[35];
      lerVetores(idade,5,nome);
      mediaidade=calculaMedia(idade,5);
      novo=acharNovo(idade,5,nomenovo,nome);
      qtd=qtdpes(idade,5);
      printf("\n A media da idade e: %d \n A pessoa mais nova e:",mediaidade);
      puts(nomenovo);
      printf("A idade dele e: %d \n E a quantidade de pessoas maiores de 65 anos sao: %d",novo,qtd);
      getch();
}










