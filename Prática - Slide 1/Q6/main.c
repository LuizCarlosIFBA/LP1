#include <stdio.h>

void main()
{
   double n1,n2,n3;
   
   printf("Escreva o primeiro valor: ");
   scanf("%lg",&n1);
   int menor = n1;
   printf("Escreva o segundo valor: ");
   scanf("%lg",&n2);
   printf("Escreva o terceiro valor: ");
   scanf("%lg",&n3);

  if(n1 < n2){
        if(n1 < n3)
            menor = n1;
        else
            menor = n3;
  }else{
       if(n2 < n3)
         menor = n2;
       else
         menor = n3;
      }   
     
  printf("O menor é: %d \n",menor);
   
}



 
