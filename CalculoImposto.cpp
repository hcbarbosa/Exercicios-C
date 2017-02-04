#include<stdio.h>
#include<conio.h>
main()
{
      int cod[100],tempo,i;
      float salb[100],imp[100],salf[100],grat[100];
      
      for(i=0;i<100;i=i+1)
      {
       printf("\nDigite seu codigo:");
       scanf("%d",&cod[i]);
       printf("Digite seu salario base:");
       scanf("%f",&salb[i]);
       printf("Digite seu tempo de servico(anos):");
       scanf("%d",&tempo);
       if(salb[i]>0&&tempo>0)
      {
                    if(salb[i]<=500.00)
                    {
                      imp[i]=0.0; 
                      if(tempo<=3)
                      {
                       grat[i]=0.2*salb[i];
                      }     
                      else
                      {
                          grat[i]=0.3*salb[i];
                      }                                
                    }
                    else
                    {                        
                        if(salb[i]<=1500.00)
                        {
                          imp[i]=0.3*salb[i];   
                          if(tempo<=3)
                          {
                              grat[i]=0.15*salb[i];
                          }
                          else
                          {
                              grat[i]=0.1*salb[i];
                          }                                         
                        }
                        else
                        {
                            if(salb[i]<=10000.00)
                            {
                             imp[i]=0.15*salb[i]; 
                              if(tempo<=3)
                              {
                               grat[i]=0.05*salb[i];
                               }
                               else
                               {
                                 grat[i]=0.025*salb[i];
                               }                  
                             }
                              else
                              {
                                  imp[i]=0.27*salb[i];
                                   if(tempo<=3)
                                    {
                                    grat[i]=0.05*salb[i];
                                    }
                                    else
                                    {
                                     grat[i]=0.025*salb[i];
                                    }     
                              }                            
                        }
                    }
       }
       else
       {
           printf("Operacao Invalida\n");
           salb[i]=0;
           grat[i]=0;
           imp[i]=0;
       }
       }
       
       for(i=0;i<100;i=i+1)
       {          
           salf[i]=(salb[i]-imp[i])+grat[i]; 
       }
       
        for(i=0;i<100;i=i+1)
       { if(salf[i]!=0)
         {
          printf("\n\nO funcionario do codigo: %d, pagara de imposto: %f reais \nE tem uma gratificacao de: %f reais.\nAssim seu salario liquido sera de: %f reais.",cod[i],imp[i],grat[i],salf[i]);
          }
          else
          {
             printf("\n\n O funcionario do codigo %d :Nao foi possivel fazer o calculo.",cod[i]); 
          }
       }
      getch();
}

