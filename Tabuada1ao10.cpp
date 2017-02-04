#include<stdio.h>
#include<conio.h>
main()
{
      int num,i,resp;
      for(i=1;i<=10;i=i+1)
      {
          printf ("\n\nTabuada do %d :",i);   
          for(num=1;num<=10;num=num+1)
          {
           resp=i*num;
           printf ("\n %d X %d = %d",i,num,resp);                                           
          }                    
      }    
      getch();
}

	
