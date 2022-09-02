#include <stdio.h>

int main() {
  int n; 

  int contp = 0;
  int contn = 0;

  int somap = 0;
  int soman = 0;

  printf("Informe o valor de n \n");
  scanf("%d", &n);
  
  while (n != 0)
  {
      if (n > 0)
      {
         contp++;  
         somap = somap + n;  
      }
      else
      {
         contn++;
         soman = soman + n;
      }

      printf("Informe o PROXIMO valor de n \n");
      scanf("%d", &n);
  }

  printf("Qtde de positivos = %d \n", contp);
  printf("Qtde de negativos = %d \n", contn);
  printf("Soma de positivos = %d \n", somap);
  printf("Soma de negativos = %d \n", soman);

}
