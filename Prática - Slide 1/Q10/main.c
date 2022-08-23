#include <stdio.h>

void main()
{ 
  int numero;
  int positivo = 0;
  int negativo = 0;
  int soma_positivo = 0; 
  int soma_negativo = 0;
  printf("Escreva um numero: ");
  scanf("%d",&numero);

  do{   
     if(numero>0){
        positivo++;
        soma_positivo += numero;
     }else{
        negativo++;
        soma_negativo += numero;
     }   

     printf("Escreva um numero: ");
     scanf("%d",&numero);
  
  }while(numero!=0);

  printf("Existem %d positivos e a soma de todos esses valores é: %d \n",positivo,soma_positivo);
  printf("Existem %d negativos e a soma de todos esses valores é: %d \n",negativo,soma_negativo);

}

