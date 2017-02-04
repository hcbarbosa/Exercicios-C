/* Sabendo que o raio do circulo mede 3.5 cm, faca um algoritmo/programa
para calcular:
     - o comprimento do círculo (2 * 3,14 * RAIO)
     - a area do circulo (3,14 * raio^2)
Mostre os resultados
*/
#include<stdio.h>
#include<conio.h>
main()
{
      float r,c,a;
      r=3.5;
      c=2*3.14*r;
      a=3.14*(r*r);
      printf("O comprimento do circulo eh: %f. \n A area do circulo eh de: %f.", c,a);
      getch();
      
      }
      
