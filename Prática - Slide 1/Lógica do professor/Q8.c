#include <iostream>


int somatorio(int x[])
{
  int soma = 0;
  for (int i = 0; i < 10; i++)
  {
     soma = soma + x[i];     
  }  
  return soma;
}


int main() {
  
  int v[10];

  printf("\n preenchendo o vetor \n");
  for (int i = 0; i < 10; i++)
  {
      scanf("%d", &v[i]);    
  }

  printf("\n imprimindo o vetor \n");
  for (int i = 0; i < 10; i++)
  {
      printf("%d ", v[i]);    
  }

  printf("\n somando o vetor \n");
  
  int soma = 0;
  soma = somatorio(v);
  /*
  for (int i = 0; i < 10; i++)
  {
     soma = soma + v[i];     
  }
  */
  printf("Soma = %d ", soma);
  
}
