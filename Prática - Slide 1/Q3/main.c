#include <stdio.h>


void main()
{
   double a,b;
   char caractere;
   
   printf("Escreva o caractere: ");
   scanf("%c",&caractere);
   fflush(stdin);
   printf("Escreva o primeiro número: ");
   scanf("%lg",&a);
   printf("Escreva o segundo número: ");
   scanf("%lg",&b);
    
   switch(caractere)
   {
     case '-':
             printf("Resultado: %2f \n",a-b);
             break;
     case '+':
             printf("Resultado: %2f \n",a+b);
             break;
     case '*':
             printf("Resultado: %2f \n",a*b);
             break;
     case '/':
             printf("Resultado: %2f\n",a/b);
             break;
     default:" ";
            
   }
}
