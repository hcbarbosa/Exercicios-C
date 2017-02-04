#include<stdio.h>
#include<stdlib.h>
void lerVetor(int x[], int tam)
{
     for(int i=0;i<tam;i=i+1)
      {   
          printf("Digite o %d elemento:",i);
          scanf("%d",&x[i]);      
     	  system("cls");                    
      }     
 }
 
int procpares(int x[], int tam, int cont, int y[])
{
    for( int i=0;i<tam;i=i+1)
      {
          if(y[i]%2==0)
          {
                          x[cont]=y[i];
                          cont=cont+1;
          }                         
      } 
      return (cont);
}

int procimpares(int x[], int tam, int cont, int y[])
{
      for(int i=0;i<tam;i=i+1)
      {
          if(y[i]%2!=0)
          {
                          x[cont]=y[i];
                          cont=cont+1;
          }                         
      }
      return(cont);
}

int procprimos(int x[],int tam, int a[], int cont)
{
     for(int n=0;n<tam;n=n+1)
	        {
	        	if(x[n]!=2)
		        {
                     if(x[n]!=0)
                     {                                            
		             	int y=0;
		                for(int i=2;i<x[n];i=i+1)
	                 	{
	               		  if(x[n]%i == 0)
                		  {
	    			      y=y+1;
	    	              }
	                 	}
	                	if(y==0 && x[n]!=1)
	                   {
	    	        	
	    	         	a[cont]=x[n]; 
	    	         	cont=cont+1;
	                	}
                     }
		       }
	           else
	           {
	           		a[cont]=x[n];
	           		cont=cont+1;
	        	}	
          	}
              return (cont);      
 }
 void mostraVetor(int x[], int tam)
 {
      for(int i=0;i<tam;i=i+1)
      {         
         printf("%d  ",x[i]);                        
      } 
 }
 
main()
{
      int vet1[30],vet2[20],par[30],impar[20],primos[50],i,contpar=0,contimpar=0,contprimo=0;
      //lendo vetor1
      printf("Vetor 1:\n");     
      lerVetor(vet1,30);
      //lendo vetor2   
      printf("Vetor 2:\n");   
      lerVetor(vet2,20);
      //processando pares
      contpar=procpares(par,30,contpar,vet1);
      //processando impares
      contimpar=procimpares(impar,20,contimpar,vet2);
      //processando primos   
      contprimo=procprimos(vet1,30,primos,contprimo);   
      contprimo=procprimos(vet2,20,primos,contprimo); 	  
     //mostrando os resultados
       printf("\n\nOs numeros pares do vetor 1 sao:\n");
       mostraVetor(par,contpar);
       printf("\n\nOs numeros impares do vetor 2 sao:\n");
       mostraVetor(impar,contimpar);
       printf("\n\nOs numeros primos dos dois vetores sao:\n");
       mostraVetor(primos,contprimo);
       printf("\n\n");      
       system("pause");
}
