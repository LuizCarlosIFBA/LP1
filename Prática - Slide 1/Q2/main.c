#include <stdio.h>

void identificarNatureza(int numero){
   while (numero <= 0) 
   { 
     printf(numero == 0 ? "N�mero igual a 0(neutro), por favor, escolha um n�mero positivo \n" : "Escolha apenas numeros positivos\n");
     scanf("%d",&numero);   
   }    

   printf(numero%2==0? "Par \n" : "Impar\n");
}

void main()
{
   int numero;
   printf("Escreva um numero positivo: ");
   scanf("%d",&numero);   
    
   identificarNatureza(numero);   
}
