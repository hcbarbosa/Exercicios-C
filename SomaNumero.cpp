#include<stdio.h>
#include<conio.h>
main()
{
      int n,i;
      float soma=0;
      printf("Digite um numero:");
      scanf("%d",&n);
      if(n>0)
      {
            for(i=1;i<=n;i=i+1)
            {
             soma=soma+(((float)i+1.0)/(i*i));                     
            }
            printf("A soma final:%f",soma);
      }
      else
      {
          printf("Nao foi possivel fazer a conta.");
      }
      getch();
}
