#include <stdio.h>

void main()
{ 
  int i=0;
  double numero;
  double soma_Numero = 0;
  while(i<10){
    i++;
    printf("Escreva o %d º :",i);
    scanf("%lg",&numero);
    soma_Numero = soma_Numero + numero;
  }
  
  printf("Valor da soma %lg",soma_Numero);
}

