#include<stdio.h>
#include<stdlib.h>
void lerVetor(int x[],int tam)
{
     for(int i=0;i<tam;i=i+1)
      {
          printf ("\nDigite o %d elemento do vetor:",i);
          scanf("%d",&x[i]);
          system("cls");   
      }
 }
int procposicao(int x[],int tam,int a[],int cont)
{
     for(int i=0;i<tam;i=i+1)
      {
          if(x[i]==30)
          {
                        a[cont]=i;
                        cont=cont+1;
          }   
      }
      return(cont);
}

void mostraVetor(int x[], int cont)
{
     for(int i=0;i<cont;i=i+1)
      {
       printf ("%d  ",x[i]);
      }
 }
 
main()
{
      int vet[150],posicao[150],i,cont=0;
      //lendo
      lerVetor(vet,150);
      //processando
      cont=procposicao(vet,150,posicao,cont);
      //respondendo
      printf ("\nO numero 30 estava na(s) posicao(oes):");
      mostraVetor(posicao,cont);
      printf ("\n\n");
      system("pause");
}
