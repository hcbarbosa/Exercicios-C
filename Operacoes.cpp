/* Sabendo q X,Y,Z são variaveis do tipo inteiro e armazenam 10,12 e -3 respectivamente . 
Faça um algoritmo/programa para calcular: 
     x+y*z
     y MOD x
     x/z
Mostre os resultados
*/

#include <stdio.h>
#include <conio.h>
main()
{
      int x,y,z,r1,r2,r3;
      x=10;
      y=12;
      z=-3;
      r1=x+y*z;
      r2=y%x;
      r3=x/z;
      printf("Resultado da 1-operacao: %d \n Resultado da 2-operacao: %d \n Resultado da 3-operacao: %d",r1,r2,r3);
      getch();
}
