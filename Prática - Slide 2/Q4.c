#include <stdlib.h>>

int main() {
  int n = 5;
  int v[n];

  for (int i = 0; i < n; i++)
  {  printf("\n Leia o %d º numero \n",i+1);
     scanf("%d", &v[i]);    
  }
  
  int aux;
  int k = n-1;// O K vai contar as variáveis do final pra trás
  /*É diferente do i, que conta do começo até o meio*/
  for (int i=0; i < n/2; i++)
  {
    aux = v[i];
    v[i] = v[k];
    v[k] = aux;
    k--;
  }

  printf("\n Imprimindo \n");
  for (int i = 0; i < n; i++)
  {
     printf("%d ", v[i]);    
  }
  
}
