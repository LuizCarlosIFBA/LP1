#include <iostream>

int calcular_fatorial(int n){
  int fat;
  
  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }
  return fat;
}

int main()
{ 
  int n;
  printf("Escreva um número para calcular o fatorial: ");
  scanf("%d",&n);

  int fatorial = calcular_fatorial(n);
  printf("\n %d",fatorial);
  return 0;
}
