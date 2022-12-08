#include <stdio.h>


int comparar(int Vorigem[], int Vdestino[])
{
  int cont = 0; 
  for (int i = 0; i < 5; i++)
  {
     for (int k = 0; k < 5; k++)
     {
         if (Vorigem[i] == Vdestino[k])
         {
           cont++;
           break;
         }
     }
  }
  
  return cont;
}


int main() {
  int V1[5] = {10, 20, 30, 50, 50};
  int V2[5] = {50, 40, 30, 20, 10};

  printf("\n Exibindo V1 \n");
  for (int i=0; i < 5 ; i++)
    printf("%d ", V1[i]);

  printf("\n Exibindo V2 \n");
  for (int i=0; i < 5 ; i++)
    printf("%d ", V2[i]);

  int contV1 = comparar(V1, V2);
  int contV2 = comparar(V2, V1);
  if (contV1 == 5)
     printf("\n Todos de V1 existem em V2 \n");
  if (contV2 == 5)
     printf("\n Todos de V2 existem em V1 \n");
  

}
