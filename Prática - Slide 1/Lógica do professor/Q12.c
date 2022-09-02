#include <stdio.h>

int main() {
  int nota;

  int cont = 0;
  int soma = 0;

  float media;

  printf("Informe uma nota \n");
  scanf("%d", &nota);

  int maior = nota;
  int menor = nota;

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
     if(nota>maior){
        maior = nota;
     }else if(nota<menor){
             menor = nota; 
           }
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


  printf("A maior nota é %d e a menor nota é %d \n");
}
