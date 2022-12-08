#include "opcoes.h"
#include <stdio.h>
#include <stdlib.h>

int nota(float n){
  float nota = n;
  while(nota<0 || nota>10){
    printf("\nPor favor, digite novamente, mas agora apenas valores de 0 até 10!\n");
    scanf("%f",&nota);  
  }
    
  return nota;
}

main(void) {
  int alteracao = 0;
  int opcao = 0;
  int valor, anterior;
  long novaMatricula;
  No *no, *lista = NULL;

  long matricula;
  float n1, n2, media;
  do {
    printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Alterar nota\n\t3 - Buscar\n\t4 - "
           "Imprimir\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("Digite a matricula: ");
      scanf("%ld",&matricula);
      printf("Digite a primeira nota: ");
      scanf("%f", &n1);
      n1 = nota(n1);
      printf("Digite a segunda nota: ");
      scanf("%f", &n2);
      n2 = nota(n2);
      inserir(&lista, matricula,n1,n2);
      break;
    case 2:
      if(lista ==NULL) {
        printf("Lista vazia\n");
        printf("Por favor preeencha antes de alterar\n");
      }else{
            printf("Digite a matricula: ");
            scanf("%ld",&matricula);
            printf("Digite a primeira nota: ");
            scanf("%f", &n1);
            n1 = nota(n1);
            printf("Digite a segunda nota: ");
            scanf("%f", &n2);
            n2 = nota(n2);
            alterar(&lista,matricula,n1,n2,remover(&lista,matricula));
            break;
          }
    case 3:
      if (lista == NULL) {
        printf("Lista vazia\n");
        printf("Por favor preeencha antes de buscar\n");
        }else {
        printf("Digite a matrícula: ");
        scanf("%ld",&matricula);
        no = buscar(&lista,matricula);
        if (no){
          printf("Matrícula: %ld\n", no->matricula);
          printf("Nota 1 : %.1f\n", no->n1);
          printf("Nota 2 : %.1f\n", no->n2);
          printf("Média : %.1f\n", no->media);
        }else printf("Matricula não encontrada!\n");
      }            
      break;
    case 4:
      if (lista == NULL) {
        printf("Lista vazia\n");
        printf("Por favor preeencha antes de imprimir\n");
      } else {
        imprimir(lista);
      }   
      break;
    default:
      if (opcao != 0)
        printf("Opcao invalida!\n");
    }

  } while (opcao != 0);
  printf("\n Fim de executção");
}

