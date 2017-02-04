#include<stdio.h>
#include<conio.h>
main()
{
 int idade, velho=0, n=0,somaid=0,media;
 char resp;
 do
 {
      printf("Digite uma idade:");
      scanf("%d",&idade);
      if(idade>velho)
      {
                     velho=idade;
      }
      somaid=somaid+idade;
      n=n+1;
      printf("Deseja inserir mais idades?");
     fflush(stdin);
      scanf("%c",&resp);
 }while(resp=='s' || resp=='S');
      media=somaid/n;
      printf("A media de idade:%d , e o mais velho tem: %d .",media,velho);
      getch();
                                               
}
