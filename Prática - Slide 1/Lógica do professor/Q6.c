#include <stdio.h>

int main() {
  int n1, n2, n3;

  printf("Informe n1 : ");
  scanf("%d", &n1);
  printf("Informe n2 : ");
  scanf("%d", &n2);
  printf("Informe n3 : ");
  scanf("%d", &n3);

  if (n1 == n2 && n1 == n3)
    printf("sao iguais ");
  else
  {
     if (n1 < n2 && n1 < n3)
        printf("menor : %d ", n1);
     else
     {
        if (n2 < n3)
           printf("menor : %d ", n2);
         else
           printf("menor : %d ", n3);
      }
    }

  
  
}
