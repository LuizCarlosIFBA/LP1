#include <stdio.h>

void checkParImpar(int x)
{
  if (x%2 == 0)
    printf("PAR");
  else
    printf("IMPAR");
}


int main() {

  int x, r;
  printf("Informe o valor de x : ");
  scanf("%d", &x);

  if (x > 0)
  {
    checkParImpar(x);
    /*
     r = x%2;
     if (r == 0)
       printf("PAR");
      else
       printf("IMPAR");
    */
  }
  else
  {
    printf("Numero invalido ");
  }

  
  
}
