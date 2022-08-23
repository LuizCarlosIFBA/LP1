#include <stdio.h>


void main()
{
   float salario;
   scanf("%f",&salario);
   float desconto = salario/100*7;
   float gratifica = salario*1.05;

   printf("%f",gratifica-desconto);     
}
