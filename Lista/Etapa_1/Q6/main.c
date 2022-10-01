#include <iostream>

void calcular_cedulas(int saque){
  int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, 
  nota_1;  

  nota_100 = saque/100;
  nota_50 = saque % 100 / 50;
  nota_20 = saque % 50 / 20;
  nota_10 = saque % 50 % 20 /10;
  nota_5 = saque % 50 % 20 % 10 / 5;
  nota_2 = saque % 50 % 20 % 10 % 5 / 2;
  nota_1 = saque % 50 % 20 % 10 % 5 % 2;

  printf("O valor de notas de 100 = %d\n", nota_100);
  printf("O valor de notas de 50 = %d\n", nota_50);
  printf("O valor de notas de 20 = %d\n", nota_20);
  printf("O valor de notas de 10 = %d\n", nota_10);
  printf("O valor de notas de 5 = %d\n", nota_5);
  printf("O valor de notas de 2 = %d\n", nota_2);
  printf("O valor de notas de 1 = %d\n", nota_1);
}

int main() {
  int saque;
  printf("Qual o valor do saque?\n");
  scanf("%d",&saque);
  
  calcular_cedulas(saque);
}
