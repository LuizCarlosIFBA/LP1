#include <stdio.h>

int main() {
  int nota;

  int cont = 0;
  int soma = 0;

  float media;

  printf("Informe uma nota \n");
  scanf("%d", &nota);

  while (nota != -1)
  {
     if (nota >=0 && nota <=10 )
     {
        cont++;
        soma = soma + nota;
     }
     else
    {
        printf("Nota invalida !");
    }

     printf("Informe a PROXIMA nota \n");
     scanf("%d", &nota);
  }

  if (cont > 0)
  {
     media = (float)soma/cont;

     printf("Qtde de notas = %d \n", cont);
     printf("Soma de notas = %d \n", soma);
     printf("Media de notas = %f \n", media);
  }
  else
  {
     printf("O aluno não teve notas ! \n");
  }




}
